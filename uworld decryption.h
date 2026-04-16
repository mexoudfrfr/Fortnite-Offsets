static inline uintptr_t DecryptUworld(uint64_t v)
{
    return v?(std::rotl(v,5)^0x165D340ULL)*0x24042FF8A5B240D7ULL-0x235CE507FE35F6B5ULL:0;
}

//example usage
uintptr_t EncryptedUWorld = Driver->read<uintptr_t>(Driver->BaseAddress + offsets::UWorld);
uintptr_t DecryptedUWorld = DecryptUWorld(EncryptedUWorld);

uintptr_t UWorld = DecryptedUWorld;
