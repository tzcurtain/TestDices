#include <iostream>
#include <chrono>

using namespace std;

class Timer{
private:
  using clock_t = chrono::high_resolution_clock;
  using second_t = chrono::duration<double,ratio<1> >;
  chrono::time_point<clock_t> m_beg;
public:
  Timer():m_beg(clock_t::now()){}
  void reset(){
    m_beg = clock_t::now();
  }
  double elapsed() const {
    return chrono::duration_cast<second_t>(clock_t::now()-m_beg).count();
  }
};

int main(){
  Timer t;

  printf("%.20lf",t.elapsed());
}
