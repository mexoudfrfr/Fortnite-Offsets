namespace offsets
{
    uintptr_t GEngine = 0x19D0EE18;
    uintptr_t ViewportClient = 0x78;
    uintptr_t GameViewport = 0xae0;
}

//example usage
uintptr_t GEngine = read<uintptr_t>(Driver->BaseAddress + offsets::GEngine);
uintptr_t GameViewport = read<uintptr_t>(GEngine + offsets::GameViewport);
uintptr_t DecryptedUWorld = read<uintptr_t>(GameViewport + offsets::ViewportClient);

uintptr_t UWorld = DecryptedUWorld;
