#include "RemoveChar.h"
#include "ToLowerCase.h"
#include "ToUpperCase.h"
#include "Document.h"

int main()
{
	// Opgave 3 h)
  ToUpperCase upper;
  ToLowerCase lower;
  RemoveChar removeE('e');

  Document document_1("My First Test");
  Document document_2("My Second Test");
  document_1.add(&removeE);
  document_1.add(&upper);
  document_1.process();

  document_2.add(&removeE);
  document_2.add(&lower);
  document_2.process();


  std::cout << document_1 << std::endl;
  std::cout << document_2 << std::endl;
	

	return 0;
}
