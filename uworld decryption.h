namespace offsets
{
    uintptr_t GEngine = 0x19de55f8;
    uintptr_t ViewportClient = 0x78;
    uintptr_t GameViewport = 0xb70;
}

//example usage
uintptr_t GEngine = read<uintptr_t>(Driver->BaseAddress + offsets::GEngine);
uintptr_t GameViewport = read<uintptr_t>(GEngine + offsets::GameViewport);
uintptr_t DecryptedUWorld = read<uintptr_t>(GameViewport + offsets::ViewportClient);

uintptr_t UWorld = DecryptedUWorld;
