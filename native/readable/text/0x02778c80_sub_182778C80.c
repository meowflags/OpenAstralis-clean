// sub_2778C80
// rva 0x02778c80  size 1438  section .text  group text
// window base 0x182778c80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2778C80(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        int a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        int a17,
        __int64 a18)
{
  __int64 v18; // r13
  _DWORD *v19; // r14
  __int64 v20; // r15
  _DWORD *v21; // rax
  int v22; // edx
  int v23; // ecx
  __int64 v24; // rdi
  __int64 v25; // rsi
  int v26; // r8d
  int v27; // r9d
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 result; // rax
  __int64 v31; // [rsp+0h] [rbp-68h] BYREF
  _DWORD *v32; // [rsp+38h] [rbp-30h]
  __int64 v33; // [rsp+48h] [rbp-20h]
  _DWORD *v34; // [rsp+50h] [rbp-18h]

  v34 = a3;
  v33 = a5;
  if ( (unsigned __int64)&v31 <= *(_QWORD *)(v20 + 8) )
    JUMPOUT(0x1827791A5LL);
  *(_DWORD *)(v20 + 288) = 0;
  if ( a3 == v19 )
    JUMPOUT(0x1827791AALL);
  v21 = (_DWORD *)((__int64 (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *))(v18
                                                                                + *(_QWORD *)&v19[2 * (*a3 >> 3) + 54]))(
                    a1,
                    a2,
                    a3,
                    a4: a3);
  if ( v21 == v19 )
    return sub_182778D74(
             a1: v24,
             a2: v25,
             a3: v22,
             a4: v23,
             a5: v26,
             a6: v27,
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
             a18);
  if ( (unsigned __int16)v19[2 * v19[2 * (*v21 >> 3) + 5]
                           + 3
                           + (v19[2 * (*v21 >> 3) + 11] & (0x574u >> HIBYTE(v19[2 * (*v21 >> 3) + 11])))] != 1396 )
    JUMPOUT(0x1827791B9LL);
  v28 = *v21 >> 3;
  v29 = *(_QWORD *)((char *)&v19[2 * v28]
                  + HIWORD(v19[2 * v19[2 * v28 + 5] + 3 + (v19[2 * v28 + 11] & (0x574u >> HIBYTE(v19[2 * v28 + 11])))]));
  v32 = v21;
  ((void (__fastcall *)(__int64, __int64, _DWORD *, __int64, _DWORD *, __int64))(v18 + v29))(
    a1: v24,
    a2: v25,
    a3: v21,
    a4: v29,
    a5: v34,
    a6: v33);
  result = (__int64)v32;
  if ( *(int *)(v20 + 16) <= 0 )
    JUMPOUT(0x18277913DLL);
  return result;
}
