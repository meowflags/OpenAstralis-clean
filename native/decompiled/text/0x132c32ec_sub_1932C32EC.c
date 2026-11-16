// sub_1932C32EC
// rva 0x132c32ec  size 666  section .text  group text
// window base 0x1932c32ec: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932C32EC(
        _DWORD a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        int a11,
        unsigned int a12,
        _BYTE *a13,
        int a14)
{
  __int64 v15; // rdi
  int v16; // r15d
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v21; // rsi
  int v22; // edi
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rsi
  unsigned int v34; // r14d
  __int64 v35; // rdi
  __int64 v36; // rax
  __int64 v37; // rdi
  __int64 v38; // rsi
  int v39; // r8d
  int v40; // r9d
  __int64 v41; // rdx
  __int64 v42; // rax
  int v43; // edx

  v15 = (unsigned int)a6;
  v16 = 1;
  if ( a13 == nullptr || *a13 != 49 || a14 != 88 )
    return 4294967290LL;
  if ( a4 == nullptr )
    return 4294967294LL;
  a4[4] = 0;
  if ( a4[6] == 0 )
  {
    a4[8] = 0;
    a4[6] = sub_1932C7E50;
  }
  if ( a4[7] == 0 )
    a4[7] = sub_1932C0654;
  if ( a3 == -1 )
    JUMPOUT(0x32651D384LL);
  if ( a6 >= 0 )
  {
    if ( a6 > 15 )
    {
      v16 = 2;
      v15 = (unsigned int)(a6 - 16);
    }
  }
  else
  {
    v16 = 0;
    if ( a6 < -15 )
      return 4294967294LL;
    v15 = (unsigned int)-a6;
  }
  if ( (unsigned int)(a11 - 1) > 8 || a5 != 8 || (unsigned int)(v15 - 8) > 7 || a3 > 9 || a12 > 4 )
    return 4294967294LL;
  if ( (_DWORD)v15 == 8 )
  {
    if ( v16 == 1 )
    {
      v15 = 9;
      goto LABEL_23;
    }
    return 4294967294LL;
  }
LABEL_23:
  v18 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64))a4[6])(
          a1: v15,
          a2,
          a3: 1,
          a4: a4[8],
          a5: 5920);
  if ( v18 == 0 )
    return 4294967292LL;
  sub_1932CA161(a1: v19, a2: v18, a3: 0, a4: v18, a5: 5920);
  a4[5] = v21;
  *(_DWORD *)(v21 + 44) = v16;
  *(_DWORD *)(v21 + 72) = v22;
  *(_DWORD *)(v21 + 120) = a11 + 7;
  *(_QWORD *)v21 = a4;
  *(_DWORD *)(v21 + 8) = 42;
  *(_DWORD *)(v21 + 76) = (1 << v22) - 1;
  *(_QWORD *)(v21 + 48) = 0;
  v23 = 1 << (a11 + 7);
  *(_DWORD *)(v21 + 116) = v23;
  *(_DWORD *)(v21 + 68) = 1 << v22;
  *(_DWORD *)(v21 + 124) = v23 - 1;
  *(_DWORD *)(v21 + 128) = (a11 + 9) / 3u;
  v24 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD, __int64))a4[6])(
          a1: 2,
          a2: v21,
          a3: (unsigned int)(1 << v22),
          a4: a4[8],
          a5: 2);
  v26 = *(unsigned int *)(v25 + 68);
  *(_QWORD *)(v25 + 80) = v24;
  v28 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, _QWORD))a4[6])(
          a1: v27,
          a2: v25,
          a3: v26,
          a4: a4[8],
          a5: (unsigned int)v27);
  v30 = *(unsigned int *)(v29 + 116);
  *(_QWORD *)(v29 + 96) = v28;
  v32 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, _QWORD))a4[6])(
          a1: v31,
          a2: v29,
          a3: v30,
          a4: a4[8],
          a5: (unsigned int)v31);
  *(_QWORD *)(v33 + 104) = v32;
  v34 = 1 << (a11 + 6);
  *(_DWORD *)(v33 + 5872) = v34;
  *(_DWORD *)(v33 + 5912) = 0;
  v36 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD, __int64))a4[6])(
          a1: v35,
          a2: v33,
          a3: v34,
          a4: a4[8],
          a5: 4);
  v41 = *(unsigned int *)(v38 + 5872);
  *(_QWORD *)(v38 + 16) = v36;
  *(_DWORD *)(v38 + 24) = 4 * v41;
  if ( *(_QWORD *)(v38 + 80) == 0 || *(_QWORD *)(v38 + 96) == 0 || *(_QWORD *)(v38 + 104) == 0 || v36 == 0 )
  {
    *(_DWORD *)(v38 + 8) = 666;
    a4[4] = MEMORY[0x88190];
    sub_1932C3208(a1: v37, a2: v38, a3: v41, (__int64)a4);
    return 4294967292LL;
  }
  v42 = v41 + v36;
  *(_DWORD *)(v38 + 172) = a3;
  v43 = v41 - 1;
  *(_QWORD *)(v38 + 5864) = v42;
  *(_DWORD *)(v38 + 176) = a12;
  *(_BYTE *)(v38 + 60) = 8;
  *(_DWORD *)(v38 + 5880) = 3 * v43;
  return sub_1932C3704(a1: v37, a2: v38, a3: v43, (_DWORD)a4, a5: v39, a6: v40);
}
