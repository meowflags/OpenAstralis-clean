// sub_181EBCBC0
// rva 0x01ebcbc0  size 178  section .text  group text
// window base 0x181ebcbc0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EBCBC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rdx
  unsigned __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // r8
  char v16; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v16 <= *(_QWORD *)(v7 + 8) )
  {
    sub_181EB83C0(a1, a2, a3, a4, a5, a6, a7: v16);
  }
  else if ( *(_BYTE *)(v6 + 376655372) == 0 )
  {
    if ( *(_DWORD *)(v7 + 300) == 0 )
      sub_181EA4560(a1, a2, a3, a4, a5, a6);
    v8 = v6 + 376655360;
    *(_BYTE *)(v6 + 376655372) = 1;
    *(_DWORD *)(v6 + 376655368) = *(_DWORD *)(v7 + 300);
    if ( (*(_DWORD *)(v6 + 376655360) & 2) != 0 )
    {
      v10 = (v8 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v8 & 0xFFFFFFFFFFF80000LL) + ((v8 - v10) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v8 & 0xFFFFFFFFFFF80000LL) + ((v8 - v10) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(v7 + 300) = 47081920;
    if ( *(int *)(v7 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return v8;
  }
  MEMORY[0x1828C1C40](a1, a2, a3: v6 + 368399976);
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_181EBCC80(a1: v13, a2: v14, a3: v11, a4: v12, a5: v15);
}
