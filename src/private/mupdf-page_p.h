#ifndef MUPDF_PAGE_P_H
#define MUPDF_PAGE_P_H

extern "C" {
#include <mupdf/fitz.h>
}

namespace MuPDF {

class DocumentPrivate;

class PagePrivate {
public:
  PagePrivate(DocumentPrivate *dp, int index);
  ~PagePrivate();

  void deleteData() {
    if (display_list) {
      fz_drop_display_list(context, display_list);
      display_list = NULL;
    }
    if (text_sheet) {
      fz_free_text_sheet(context, text_sheet);
      text_sheet = NULL;
    }
    if (text_page) {
      fz_free_text_page(context, text_page);
      text_page = NULL;
    }
    if (page) {
      fz_free_page(document, page);
      page = NULL;
    }
  }

  DocumentPrivate *documentp;
  fz_context *context;
  fz_document *document;
  fz_page *page;
  fz_display_list *display_list;
  fz_text_sheet *text_sheet;
  fz_text_page *text_page;
  bool transparent;
  int b, g, r, a; // background color
};

} // namespace MuPDF

#endif // end MUPDF_PAGE_P_H
