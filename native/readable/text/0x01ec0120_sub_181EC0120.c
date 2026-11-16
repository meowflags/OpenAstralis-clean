// sub_1EC0120
// rva 0x01ec0120  size 317  section .text  group text
// window base 0x181ec0120: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EC0120(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, _DWORD *a6)
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rcx
  unsigned int v9; // eax
  _DWORD *v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rdi
  unsigned int v14; // eax
  _DWORD *v15; // rdi
  __int64 v16; // rcx
  __int64 result; // rax
  char v18; // [rsp+0h] [rbp-38h] BYREF
  _DWORD *v19; // [rsp+10h] [rbp-28h]
  __int64 v20; // [rsp+18h] [rbp-20h]
  _DWORD *v21; // [rsp+20h] [rbp-18h]
  _DWORD *v22; // [rsp+28h] [rbp-10h]
  unsigned int v23; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)&v18 <= *(_QWORD *)(v7 + 8) )
  {
    v22 = a6;
    v21 = a5;
    v20 = a3;
    sub_1EB84E0(a1, a2, a3, a4, (__int64)a5, (__int64)a6, a7: v18);
LABEL_11:
    v22 = a6;
    v21 = a5;
    v20 = a3;
    sub_2771080();
    goto LABEL_12;
  }
  if ( a5 != v6 )
  {
    v8 = *a5 >> 3;
    v9 = v6[2 * v8 + 11];
    v10 = &v6[2 * v6[2 * v8 + 5]];
    v11 = HIBYTE(v9);
    if ( (unsigned __int16)v10[(v9 & (0x21Au >> SHIBYTE(v9))) + 3] != 538 )
      goto LABEL_13;
  }
  if ( a6 != v6 )
  {
    v12 = *a6 >> 3;
    if ( (_DWORD)v12 != 4260808 )
      goto LABEL_14;
  }
  v13 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v13 == 0 )
    goto LABEL_11;
  v14 = *(unsigned __int8 *)(a3 + 8);
  v15 = &v6[2 * v13];
  if ( a6 == v6 )
  {
LABEL_12:
    v22 = a6;
    v21 = a5;
    v20 = a3;
    sub_2771080(a1: v15);
LABEL_13:
    v22 = a6;
    v21 = a5;
    v20 = a3;
    sub_276FC00(a1: v10, a2, a3: a5, a4: v11, a5: v6 + 10116798);
LABEL_14:
    sub_276FC00(a1: v12, a2, a3: a6, a4: a5, a5: v6 + 8521616);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1EC0260();
  }
  v20 = a3;
  v16 = (unsigned int)a6[1];
  v22 = a6;
  v19 = v15;
  v23 = v14;
  v21 = a5;
  result = sub_4F642E0(a1: (unsigned int)v16, a2, a3: v15, a4: v16, a5: v14, a6: a5);
  if ( *(int *)(v7 + 16) <= 0 )
    return sub_277F280();
  return result;
}
