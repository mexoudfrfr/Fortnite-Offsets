namespace offsets
{
    uintptr_t CameraRotation = 0x200;
    uintptr_t LastRenderTime = 0x7e4;
}

bool IsPlayerVisible(uintptr_t Mesh) 
{
    uintptr_t WorldTimeSeconds = read<double>(LocalPtrs::Gworld + offsets::CameraRotation + 0x10);
    uintptr_t LastRenderTime = read<float>(Mesh + offsets::LastRenderTime);
    return WorldTimeSeconds - LastRenderTime <= 0.06f;
}
