// sub_4F262C0
// rva 0x04f262c0  size 262  section .text  group text
// window base 0x184f262c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F262C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  _QWORD *v8; // r15
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v16; // [rsp+0h] [rbp-28h] BYREF
  __int64 v17; // [rsp+10h] [rbp-18h]
  __int64 v18; // [rsp+18h] [rbp-10h]
  int v19; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v16 > v8[1] )
  {
    v9 = v8[5];
    if ( (unsigned __int64)(v9 + 40) > v8[4] )
    {
      v19 = a5;
      v18 = a3;
      v9 = sub_1EAA920(a1, a2, a3: 34107088);
    }
    else
    {
      v8[5] = v9 + 40;
      *(_DWORD *)v9 = 34107088;
      *(_DWORD *)(v9 + 4) = 0;
      *(_QWORD *)(v9 + 8) = 0;
      *(_QWORD *)(v9 + 16) = 0;
      *(_QWORD *)(v9 + 24) = 0;
      *(_QWORD *)(v9 + 32) = 0;
      v19 = a5;
      v18 = a3;
    }
    *(_DWORD *)(v9 + 20) = 46923644;
    *(_DWORD *)(v9 + 16) = *(_DWORD *)(v7 + 374343896);
    v10 = (unsigned __int64)(v9 - v7) >> 3;
    *(_DWORD *)(v9 + 12) = v10;
    v17 = v9;
    sub_503B9A0(a1, a2, a3: v9, a4: v10, a5: 0);
    v14 = v17;
    *(_DWORD *)(v17 + 8) = 44870411;
    if ( (*(_DWORD *)v14 & 2) != 0 )
      goto LABEL_6;
    while ( 1 )
    {
      v14 = sub_2769900(a1: v12, a2: v13, a3: v14, a4: v11, a5: &a7);
LABEL_6:
      v11 = (v14 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v14 & 0xFFFFFFFFFFF80000LL) + ((v14 - v11) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v14 & 0xFFFFFFFFFFF80000LL) + ((v14 - v11) >> 9) + 0x38) = 0;
    }
  }
  sub_1EB84E0();
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
  return sub_4F263E0();
}
