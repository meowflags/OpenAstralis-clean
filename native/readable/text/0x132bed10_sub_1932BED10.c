// sub_132BED10
// rva 0x132bed10  size 294  section .text  group text
// window base 0x1932bed10: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132BED10(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, __int64 a5)
{
  _DWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rsi
  bool v10; // zf
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v20; // [rsp+0h] [rbp-438h] BYREF
  _BYTE v21[1024]; // [rsp+20h] [rbp-418h] BYREF
  __int64 v22; // [rsp+420h] [rbp-18h]

  v6 = (_DWORD *)__imp_api-ms-win-crt-runtime-l1-1-0.dll!_errno(a1: a4, a2: a5, a3, a4);
  v10 = MEMORY[0x337798]/* 0x337798 */ == 0;
  *v6 = 0;
  if ( v10 )
    sub_132C8C70();
  if ( a3 != nullptr )
    *a3 = 0;
  if ( (unsigned __int64)sub_1932CA1FD(a1: v8, a2: v9, a3: v7, a4: v8) < 0x400 )
  {
    sub_1932CA27B(a1: v12, a2: v13, a3: v12, a4: v21);
    sub_132C8C20(a1: v17, a2: v18, a3: v16, a4: v21);
  }
  if ( a3 != nullptr )
    *a3 = 547392;
  return sub_132C8DE0(a1: v12, a2: v13, a3: v11, a4: (unsigned __int64)&v20 ^ v22, a5: v14, a6: v15);
}
