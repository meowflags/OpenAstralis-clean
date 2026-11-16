// sub_5041740
// rva 0x05041740  size 927  section .text  group text
// window base 0x185041740: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_5041740(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  _DWORD *v8; // r14
  __int64 v9; // r15
  __int64 v10; // r8
  int v11; // r9d
  unsigned int v12; // r9d
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // rdi
  __int64 v35; // rsi
  __int64 result; // rax
  int v37; // edx
  int v38; // ecx
  int v39; // edi
  int v40; // esi
  int v41; // r8d
  int v42; // r9d
  __int64 v43; // [rsp+0h] [rbp-28h] BYREF
  _DWORD *v44; // [rsp+8h] [rbp-20h]
  _DWORD *v45; // [rsp+10h] [rbp-18h]
  _DWORD *v46; // [rsp+18h] [rbp-10h]
  unsigned int v47; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v43 <= *(_QWORD *)(v9 + 8) )
  {
    v44 = a3;
    sub_1EB84E0();
  }
  else if ( a3 != v8 )
  {
    if ( (unsigned __int16)v8[2 * v8[2 * (*a3 >> 3) + 5]
                            + 3
                            + (v8[2 * (*a3 >> 3) + 11] & (0x61Du >> HIBYTE(v8[2 * (*a3 >> 3) + 11])))] != 1565 )
    {
LABEL_8:
      sub_2770780();
      __builtin_debugtrap();
      return sub_5041AE0(a1: v39, a2: v40, a3: v37, a4: v38, a5: v41, a6: v42, a7);
    }
    v10 = *a3 >> 3;
    v11 = v8[2 * v10 + 11];
    v46 = &v8[2 * v8[2 * v10 + 5]];
    v47 = v11 & (0x61Du >> SHIBYTE(v11));
    v12 = v46[v47 + 3];
    v45 = &v8[2 * v10];
    v13 = *(_QWORD *)((char *)v45 + HIWORD(v12) + 120);
    v44 = a3;
    ((void (__fastcall *)(__int64, _DWORD *, _DWORD *, __int64, _DWORD *, _DWORD *))(v7 + v13))(
      a1,
      a2: a3,
      a3,
      a4: v13,
      a5: v8 + 89979472,
      a6: v8 + 93119118);
    ((void (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *, _DWORD *, _DWORD *))(v7
                                                                                   + *(_QWORD *)((char *)v45
                                                                                               + HIWORD(v46[v47 + 3])
                                                                                               + 120)))(
      a1: v14,
      a2: v15,
      a3: v44,
      a4: v46,
      a5: v8 + 89979458,
      a6: v8 + 93122368);
    ((void (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *, _DWORD *, _DWORD *))(v7
                                                                                   + *(_QWORD *)((char *)v45
                                                                                               + HIWORD(v46[v47 + 3])
                                                                                               + 120)))(
      a1: v16,
      a2: v17,
      a3: v44,
      a4: v46,
      a5: v8 + 90032608,
      a6: v8 + 93119102);
    ((void (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *, _DWORD *, _DWORD *))(v7
                                                                                   + *(_QWORD *)((char *)v45
                                                                                               + HIWORD(v46[v47 + 3])
                                                                                               + 120)))(
      a1: v18,
      a2: v19,
      a3: v44,
      a4: v46,
      a5: v8 + 90032622,
      a6: v8 + 92051100);
    ((void (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *, _DWORD *, _DWORD *))(v7
                                                                                   + *(_QWORD *)((char *)v45
                                                                                               + HIWORD(v46[v47 + 3])
                                                                                               + 120)))(
      a1: v20,
      a2: v21,
      a3: v44,
      a4: v46,
      a5: v8 + 89979484,
      a6: v8 + 92585988);
    ((void (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *, _DWORD *, _DWORD *))(v7
                                                                                   + *(_QWORD *)((char *)v45
                                                                                               + HIWORD(v46[v47 + 3])
                                                                                               + 120)))(
      a1: v22,
      a2: v23,
      a3: v44,
      a4: v46,
      a5: v8 + 90093342,
      a6: v8 + 93112392);
    ((void (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *, _DWORD *, _DWORD *))(v7
                                                                                   + *(_QWORD *)((char *)v45
                                                                                               + HIWORD(v46[v47 + 3])
                                                                                               + 120)))(
      a1: v24,
      a2: v25,
      a3: v44,
      a4: v46,
      a5: v8 + 90028464,
      a6: v8 + 93119166);
    ((void (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *, _DWORD *, _DWORD *))(v7
                                                                                   + *(_QWORD *)((char *)v45
                                                                                               + HIWORD(v46[v47 + 3])
                                                                                               + 120)))(
      a1: v26,
      a2: v27,
      a3: v44,
      a4: v46,
      a5: v8 + 90028496,
      a6: v8 + 92411008);
    ((void (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *, _DWORD *, _DWORD *))(v7
                                                                                   + *(_QWORD *)((char *)v45
                                                                                               + HIWORD(v46[v47 + 3])
                                                                                               + 120)))(
      a1: v28,
      a2: v29,
      a3: v44,
      a4: v46,
      a5: v8 + 90028480,
      a6: v8 + 92022760);
    ((void (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *, _DWORD *, _DWORD *))(v7
                                                                                   + *(_QWORD *)((char *)v45
                                                                                               + HIWORD(v46[v47 + 3])
                                                                                               + 120)))(
      a1: v30,
      a2: v31,
      a3: v44,
      a4: v46,
      a5: v8 + 89979526,
      a6: v8 + 92585974);
    ((void (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *, _DWORD *, _DWORD *))(v7
                                                                                   + *(_QWORD *)((char *)v45
                                                                                               + HIWORD(v46[v47 + 3])
                                                                                               + 120)))(
      a1: v32,
      a2: v33,
      a3: v44,
      a4: v46,
      a5: v8 + 89979512,
      a6: v8 + 90260574);
    result = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *, _DWORD *, _DWORD *))(v7
                                                                                               + *(_QWORD *)((char *)v45 + HIWORD(v46[v47 + 3]) + 120)))(
               a1: v34,
               a2: v35,
               a3: v44,
               a4: v46,
               a5: v8 + 89979498,
               a6: v8 + 90260842);
    if ( *(int *)(v9 + 16) <= 0 )
      return sub_277F280();
    return result;
  }
  sub_2771080();
  goto LABEL_8;
}
