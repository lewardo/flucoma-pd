#include <clients/rt/SpectralShapeClient.hpp>
#include <FluidPDWrapper.hpp>

extern "C" void setup_fluid0x2ebufspectralshape(void)
{
  using namespace fluid::client;
  makePDWrapper<NRTThreadedSpectralShapeClient>("fluid.bufspectralshape");
}
