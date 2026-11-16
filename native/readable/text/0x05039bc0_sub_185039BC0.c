// sub_5039BC0
// rva 0x05039bc0  size 198  section .text  group text
// window base 0x185039bc0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall __noreturn sub_5039BC0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // r14
  _QWORD *v8; // r15
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // [rsp+0h] [rbp-28h] BYREF
  __int64 v15; // [rsp+10h] [rbp-18h]
  __int64 v16; // [rsp+18h] [rbp-10h]
  __int64 v17; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v14 <= v8[1] )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
  }
  v9 = v8[5];
  if ( (unsigned __int64)(v9 + 40) > v8[4] )
    goto LABEL_5;
  v8[5] = v9 + 40;
  *(_DWORD *)v9 = 34171568;
  *(_DWORD *)(v9 + 4) = 0;
  *(_QWORD *)(v9 + 8) = 0;
  *(_QWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 24) = 0;
  *(_QWORD *)(v9 + 32) = 0;
  v17 = a5;
  v16 = a3;
  while ( 1 )
  {
    *(_DWORD *)(v9 + 20) = 46923644;
    *(_DWORD *)(v9 + 16) = *(_DWORD *)(v7 + 374343896);
    v10 = (unsigned __int64)(v9 - v7) >> 3;
    *(_DWORD *)(v9 + 12) = v10;
    v15 = v9;
    sub_503B9A0(a1, a2, a3: v9, a4: v10, a5: 0);
    sub_2769900(a1: v12, a2: v13, a3: v15, a4: v11, a5: &a7);
LABEL_5:
    v17 = a5;
    v16 = a3;
    v9 = sub_1EAA920(a1, a2, a3: 34171568);
  }
}
