// sub_1329F840
// rva 0x1329f840  size 601  section .text  group text
// window base 0x19329f840: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1329F840(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v10; // r9d
  __int64 result; // rax
  unsigned int v66; // r9d

  _RAX = 0;
  __asm { cpuid }
  v10 = _RAX;
  _RAX = 0;
  __asm { cpuid }
  *(_DWORD *)a4 = _RAX;
  *(_DWORD *)(a4 + 4) = _RBX;
  *(_DWORD *)(a4 + 8) = _RCX;
  *(_DWORD *)(a4 + 12) = _RDX;
  if ( v10 != 0 )
  {
    _RAX = 1;
    __asm { cpuid }
    *(_DWORD *)(a4 + 24) = _RCX;
    *(_DWORD *)(a4 + 16) = _RAX;
    *(_DWORD *)(a4 + 20) = _RBX;
    *(_DWORD *)(a4 + 28) = _RDX;
    if ( (_RCX & 0x18000000) == 0x18000000 )
    {
      __asm { xgetbv }
      *(_QWORD *)(a4 + 276) = _RAX | (_RDX << 32);
    }
  }
  if ( v10 >= 4 )
  {
    _RAX = 4;
    __asm { cpuid }
    if ( (_RAX & 0x1F) != 0 )
    {
      *(_DWORD *)(a4 + 32) = _RAX;
      *(_DWORD *)(a4 + 36) = _RBX;
      *(_DWORD *)(a4 + 40) = _RCX;
      *(_DWORD *)(a4 + 44) = _RDX;
    }
  }
  if ( v10 >= 7 )
  {
    _RAX = 7;
    __asm { cpuid }
    *(_DWORD *)(a4 + 48) = _RAX;
    _RAX = 7;
    *(_DWORD *)(a4 + 56) = _RCX;
    *(_DWORD *)(a4 + 52) = _RBX;
    *(_DWORD *)(a4 + 60) = _RDX;
    __asm { cpuid }
    *(_DWORD *)(a4 + 64) = _RAX;
    *(_DWORD *)(a4 + 68) = _RDX;
  }
  if ( v10 >= 0x24 )
  {
    _RAX = 36;
    __asm { cpuid }
    *(_DWORD *)(a4 + 72) = _RAX;
    *(_DWORD *)(a4 + 76) = _RBX;
  }
  if ( v10 >= 0x29 )
  {
    _RAX = 41;
    __asm { cpuid }
    *(_DWORD *)(a4 + 80) = _RBX;
  }
  if ( v10 >= 0xB )
  {
    _RAX = 11;
    __asm { cpuid }
    *(_DWORD *)(a4 + 84) = _RAX;
    _RAX = 11;
    *(_DWORD *)(a4 + 92) = _RCX;
    *(_DWORD *)(a4 + 88) = _RBX;
    *(_DWORD *)(a4 + 96) = _RDX;
    __asm { cpuid }
    if ( (_RAX & 0x1F) != 0 || (_BYTE)_RBX != 0 )
    {
      *(_DWORD *)(a4 + 100) = _RAX;
      *(_DWORD *)(a4 + 104) = _RBX;
      *(_DWORD *)(a4 + 108) = _RCX;
      *(_DWORD *)(a4 + 112) = _RDX;
    }
    _RAX = 11;
    __asm { cpuid }
    if ( (_RAX & 0x1F) != 0 || (_BYTE)_RBX != 0 )
    {
      *(_DWORD *)(a4 + 116) = _RAX;
      *(_DWORD *)(a4 + 120) = _RBX;
      *(_DWORD *)(a4 + 124) = _RCX;
      *(_DWORD *)(a4 + 128) = _RDX;
    }
  }
  _RAX = 0x80000000LL;
  __asm { cpuid }
  v66 = result;
  if ( (unsigned int)result >= 0x80000001 )
  {
    _RAX = 2147483649LL;
    __asm { cpuid }
    *(_DWORD *)(a4 + 148) = result;
    *(_DWORD *)(a4 + 152) = _RBX;
    *(_DWORD *)(a4 + 156) = _RCX;
    *(_DWORD *)(a4 + 160) = _RDX;
  }
  if ( v66 >= 0x80000005 )
  {
    _RAX = 2147483653LL;
    __asm { cpuid }
    *(_DWORD *)(a4 + 212) = result;
    *(_DWORD *)(a4 + 216) = _RBX;
    *(_DWORD *)(a4 + 220) = _RCX;
    *(_DWORD *)(a4 + 224) = _RDX;
  }
  if ( v66 >= 0x80000007 )
  {
    _RAX = 2147483655LL;
    __asm { cpuid }
    *(_DWORD *)(a4 + 228) = result;
    *(_DWORD *)(a4 + 232) = _RBX;
    *(_DWORD *)(a4 + 236) = _RCX;
    *(_DWORD *)(a4 + 240) = _RDX;
  }
  if ( v66 >= 0x80000008 )
  {
    _RAX = 2147483656LL;
    __asm { cpuid }
    *(_DWORD *)(a4 + 244) = result;
    *(_DWORD *)(a4 + 248) = _RBX;
    *(_DWORD *)(a4 + 252) = _RCX;
    *(_DWORD *)(a4 + 256) = _RDX;
  }
  if ( v66 >= 0x8000001E )
  {
    _RAX = 2147483678LL;
    __asm { cpuid }
    *(_DWORD *)(a4 + 260) = result;
    *(_DWORD *)(a4 + 264) = _RBX;
    *(_DWORD *)(a4 + 268) = _RCX;
    *(_DWORD *)(a4 + 272) = _RDX;
  }
  return result;
}
