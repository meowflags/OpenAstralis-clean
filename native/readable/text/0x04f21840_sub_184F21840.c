// sub_4F21840
// rva 0x04f21840  size 255  section .text  group text
// window base 0x184f21840: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F21840(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  _QWORD *v8; // r15
  __int64 v9; // r8
  unsigned __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v15; // [rsp+0h] [rbp-18h] BYREF
  __int64 v16; // [rsp+8h] [rbp-10h]
  __int64 v17; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v15 > v8[1] )
  {
    v9 = v8[5];
    if ( (unsigned __int64)(v9 + 40) > v8[4] )
    {
      v17 = a3;
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
      v17 = a3;
    }
    *(_DWORD *)(v9 + 20) = 46923644;
    *(_DWORD *)(v9 + 16) = *(_DWORD *)(v7 + 374343896);
    *(_DWORD *)(v9 + 12) = (unsigned __int64)(v9 - v7) >> 3;
    v16 = v9;
    sub_503B9A0(a1, a2, a3: v9, a4, a5: 0);
    v13 = v16;
    *(_DWORD *)(v16 + 8) = 44870403;
    if ( (*(_DWORD *)v13 & 2) != 0 )
      goto LABEL_6;
    while ( 1 )
    {
      v13 = sub_2769900(a1: v11, a2: v12, a3: v13, a4: v10, a5: &a7);
LABEL_6:
      v10 = (v13 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v13 & 0xFFFFFFFFFFF80000LL) + ((v13 - v10) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v13 & 0xFFFFFFFFFFF80000LL) + ((v13 - v10) >> 9) + 0x38) = 0;
    }
  }
  sub_1EB84E0();
  __builtin_debugtrap();
  return sub_4F21940();
}
