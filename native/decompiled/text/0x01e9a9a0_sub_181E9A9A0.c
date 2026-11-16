// sub_181E9A9A0
// rva 0x01e9a9a0  size 198  section .text  group text
// window base 0x181e9a9a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181E9A9A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  int v12; // r9d
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // r8
  char v17; // [rsp+0h] [rbp-28h] BYREF
  __int64 v18; // [rsp+10h] [rbp-18h]
  __int64 v19; // [rsp+18h] [rbp-10h]
  unsigned int v20; // [rsp+24h] [rbp-4h]

  v19 = a3;
  if ( (unsigned __int64)&v17 <= *(_QWORD *)(v7 + 8) )
  {
    sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v17);
LABEL_10:
    MEMORY[0x1828C1C40](a1: v13, a2: v14, a3: v6 + 370572336);
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
    return sub_181E9AA80();
  }
  v8 = *(_QWORD *)(v7 + 40);
  if ( (unsigned __int64)(v8 + 24) > *(_QWORD *)(v7 + 32) )
  {
    v8 = sub_181EAA920(a1, a2, a3: 34161576, a4);
  }
  else
  {
    *(_QWORD *)(v7 + 40) = v8 + 24;
    *(_DWORD *)v8 = 34161576;
    *(_DWORD *)(v8 + 4) = 0;
    *(_QWORD *)(v8 + 8) = 0;
    *(_QWORD *)(v8 + 16) = 0;
  }
  v18 = v8;
  v20 = *(_DWORD *)(v6 + 58177852);
  MEMORY[0x185787780](a1, a2, a3: v8, a4, a5: v20);
  sub_181E9A800(a1: v10, a2: v11, a3: v6 + 58177792, a4: v9, a5: v18, a6: v12, a7: v17);
  v15 = v18;
  if ( v20 != *(_DWORD *)(v18 + 12) )
    goto LABEL_10;
  if ( *(int *)(v7 + 16) <= 0 )
    MEMORY[0x18277F280]();
  return v15;
}
