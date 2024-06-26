#ifndef MUPDF_DOCUMENT_P_H
#define MUPDF_DOCUMENT_P_H

extern "C" {
#include <mupdf/fitz.h>
#include <mupdf/pdf.h>
}
#include <QList>
#include <QString>

namespace MuPDF {

class OutlinePrivate;
class PagePrivate;

class DocumentPrivate {
public:
  DocumentPrivate(const QString &filePath);
  DocumentPrivate(unsigned char *bytes, int len);
  ~DocumentPrivate();

  void deleteData() {
    if (document) {
      fz_close_document(document);
      document = NULL;
    }
    if (context) {
      fz_free_context(context);
      context = NULL;
    }
  }

  /**
   * @brief Get info of the document
   *
   * @param key info key
   */
  QString info(const char *key) {
    pdf_document *xref = (pdf_document *)document;
    pdf_obj *info = pdf_dict_gets(pdf_trailer(xref), (char *)"Info");
    if (!info)
      return QString();
    pdf_obj *obj = pdf_dict_gets(info, (char *)key);
    if (!obj)
      return QString();
    char *str = pdf_to_utf8((pdf_document *)document, obj);
    QString ret = QString::fromUtf8(str);
    free(str);
    return ret;
  }

  fz_context *context;
  fz_document *document;
  bool transparent;
  int b, g, r, a; // background color

  // children
  QList<OutlinePrivate *> outlines;
  QList<PagePrivate *> pages;
};

} // namespace MuPDF

#endif // end MUPDF_DOCUMENT_P_H
