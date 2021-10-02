#pragma once
#include "DiskPlotContext.h"
#include "plotshared/MTJob.h"


struct GenF1Job : MTJob<GenF1Job>
{
    const byte* key;

    uint32  blockCount;
    uint32  entryCount;
    uint32  x;

    void Run() override;
};

class DiskPlotPhase1
{
public:
    DiskPlotPhase1( DiskPlotContext& cx );

    void Run();

private:

    void GenF1();

private:
    DiskPlotContext& _cx;
};