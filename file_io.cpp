#include <fstream>

using namespace std;

int main() {
  ofstream f;
  f.open("file_io.txt");
  for (int i = 0; i < 10; ++i) {
    f << "The " << i << '\n';
  }
  f.close();

  return 0;
}
