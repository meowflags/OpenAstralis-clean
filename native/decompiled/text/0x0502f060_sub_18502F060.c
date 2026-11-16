// sub_18502F060
// rva 0x0502f060  size 282  section .text  group text
// window base 0x18502f060: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18502F060(
        int a1,
        int a2,
        _DWORD *a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        __int64 a9,
        int a10,
        int a11,
        __int64 a12)
{
  __int64 v12; // r13
  __int64 v13; // r14
  __int64 v14; // r15
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 (__fastcall *v22)(__int64, __int64, _DWORD *); // rax
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 result; // rax
  _QWORD v26[3]; // [rsp+0h] [rbp-38h] BYREF
  _DWORD *v27; // [rsp+18h] [rbp-20h]
  unsigned int v28; // [rsp+24h] [rbp-14h]
  __int64 (__fastcall *v29)(__int64, __int64, _DWORD *); // [rsp+28h] [rbp-10h]
  __int64 (__fastcall *v30)(__int64, __int64, _DWORD *); // [rsp+30h] [rbp-8h]

  if ( (unsigned __int64)v26 <= *(_QWORD *)(v14 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
  }
  v15 = *a3 >> 3;
  if ( a3[13] == 0 )
    return sub_18502F107(a1, a2, (_DWORD)a3, a4: v15, a5, a6, a7, a8, a9, a10, a11, a12);
  v30 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v12 + *(_QWORD *)(v13 + 8 * v15 + 384));
  v28 = v15;
  v27 = a3;
  MEMORY[0x186362180]();
  v18 = v30(a1: v16, a2: v17, a3: v27);
  v26[2] = v18;
  if ( v18 != v13 )
    MEMORY[0x186362A80](a1: v20, a2: v21, a3: v18, a4: v19, a5: v27);
  v22 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v12 + *(_QWORD *)(v13 + 8LL * v28 + 376));
  v29 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v12 + *(_QWORD *)(v13 + 8LL * v28 + 136));
  if ( v22(a1: v20, a2: v21, a3: v27) != v13 )
    MEMORY[0x1861180A0]();
  result = v29(a1: v23, a2: v24, a3: v27);
  if ( *(int *)(v14 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
