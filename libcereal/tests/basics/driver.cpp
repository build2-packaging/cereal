#include <cereal/archives/binary.hpp>
#include <cereal/types/vector.hpp>

#include <sstream>
#include <vector>

#undef NDEBUG
#include <cassert>

struct point
{
  int x, y;

  template <class Archive>
  void serialize (Archive& ar)
  {
    ar (x, y);
  }
};

int main ()
{
  using namespace std;

  stringstream ss;

  {
    cereal::BinaryOutputArchive oa (ss);
    vector<point> ps {{1, 2}, {3, 4}};
    oa (ps);
  }

  vector<point> ps;
  {
    cereal::BinaryInputArchive ia (ss);
    ia (ps);
  }

  assert (ps.size () == 2);
  assert (ps[0].x == 1 && ps[0].y == 2);
  assert (ps[1].x == 3 && ps[1].y == 4);
}
