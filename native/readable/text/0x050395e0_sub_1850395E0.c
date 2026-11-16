// sub_50395E0
// rva 0x050395e0  size 1414  section .text  group text
// window base 0x1850395e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_50395E0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        int a17,
        __int64 a18,
        int a19,
        __int64 a20,
        __int64 a21,
        __int64 a22)
{
  __int64 v22; // r13
  _DWORD *v23; // r14
  __int64 v24; // r15
  __int64 v25; // rcx
  unsigned int v26; // ebp
  __int64 v27; // rax
  __int64 v28; // rsi
  _DWORD *v29; // rdi
  __int64 v30; // rsi
  _DWORD *v31; // rdi
  __int64 result; // rax
  __int64 v33; // [rsp+0h] [rbp-88h] BYREF
  _DWORD *v34; // [rsp+20h] [rbp-68h]
  int v35; // [rsp+30h] [rbp-58h]
  int v36; // [rsp+34h] [rbp-54h]
  __int64 v37; // [rsp+38h] [rbp-50h]
  _DWORD *v38; // [rsp+40h] [rbp-48h]
  _DWORD *v39; // [rsp+48h] [rbp-40h]
  __int64 v40; // [rsp+50h] [rbp-38h]
  __int64 v41; // [rsp+60h] [rbp-28h]
  unsigned int v42; // [rsp+6Ch] [rbp-1Ch]
  unsigned int v43; // [rsp+74h] [rbp-14h]

  v40 = a3;
  v39 = a5;
  if ( (unsigned __int64)&v33 <= *(_QWORD *)(v24 + 8) )
    JUMPOUT(0x185039AEALL);
  v25 = *(unsigned int *)(a3 + 4);
  v38 = &v23[2 * v25];
  if ( (_DWORD)v25 == 0 )
    JUMPOUT(0x185039AF4LL);
  v26 = v23[2 * v25 + 2];
  v43 = v26;
  if ( a5 == v23 )
    JUMPOUT(0x185039AFELL);
  v27 = a5[1] & (v26 - 1);
  if ( v26 <= (unsigned int)v27 )
    JUMPOUT(0x185039B08LL);
  v36 = v25;
  v28 = (unsigned int)v23[2 * v25 + 3 + v27];
  v29 = &v23[2 * v28];
  v35 = (unsigned __int64)(a6 - (_QWORD)v23) >> 3;
  if ( (_DWORD)v28 == 0 )
    return sub_1850396D2(
             a1: (_DWORD)v29,
             a2: 0,
             a3,
             a4: v25,
             (_DWORD)a5,
             a6,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12,
             a13,
             a14,
             a15,
             a16,
             a17,
             a18,
             a19,
             a20,
             a21,
             a22);
  v42 = v27;
  v37 = a6;
  v30 = *(_QWORD *)&v23[2 * (v23[2 * v28] >> 3) + 44];
  v41 = v22 + v30;
  v34 = v29;
  if ( ((unsigned int (__fastcall *)(_DWORD *, __int64, _DWORD *))(v22 + v30))(a1: v29, a2: v30, a3: v29) == 0 )
    JUMPOUT(0x185039811LL);
  v31 = v34;
  result = v42;
  if ( v34 == v23 )
    JUMPOUT(0x185039B27LL);
  v34[5] = v35;
  if ( (*v31 & 2) != 0 )
    JUMPOUT(0x185039A2CLL);
  if ( *(int *)(v24 + 16) <= 0 )
    JUMPOUT(0x185039ACALL);
  return result;
}
