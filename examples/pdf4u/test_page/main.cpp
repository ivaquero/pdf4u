#include "pdf4u.h"
#include <QDebug>
#include <QImage>

int main(int argc, char **argv) {
  // open document
  QString file = argv[1];
  if (file.isEmpty()) {
    return 1;
  }
  MuPDF::Document *document = MuPDF::loadDocument(file);
  if (NULL == document) {
    return -1;
  }

  // load page
  MuPDF::Page *page = document->page(0);
  if (NULL == page) {
    delete document;
    return -1;
  }

  // test Page::size()
  qDebug() << page->size();

  // test Page::renderImage()
  QImage image = page->renderImage(2.0f, 2.0f, 90.0f);
  if (!image.save("a.png")) {
    return 1;
  }

  delete page;
  delete document;
  return 0;
}
