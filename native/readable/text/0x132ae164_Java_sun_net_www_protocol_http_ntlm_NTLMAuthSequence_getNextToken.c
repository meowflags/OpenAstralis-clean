// Java_sun_net_www_protocol_http_ntlm_NTLMAuthSequence_getNextToken
// rva 0x132ae164  size 657  section .text  group text
// window base 0x1932ae164: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall Java_sun_net_www_protocol_http_ntlm_NTLMAuthSequence_getNextToken(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        __int64 a11)
{
  __int64 v11; // rax
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // eax
  int v29; // eax
  __int64 v30; // rax
  void (__fastcall *v31)(__int64, __int64, __int64, __int64 *, _QWORD, _QWORD); // r10
  __int64 v33; // [rsp+0h] [rbp-100h] BYREF
  __int64 v34; // [rsp+8h] [rbp-F8h]
  __int64 v35; // [rsp+10h] [rbp-F0h]
  char *v36; // [rsp+20h] [rbp-E0h]
  int v37; // [rsp+28h] [rbp-D8h]
  unsigned __int64 v38; // [rsp+30h] [rbp-D0h]
  int v39; // [rsp+38h] [rbp-C8h]
  __int64 v40; // [rsp+40h] [rbp-C0h]
  _DWORD *v41; // [rsp+48h] [rbp-B8h]
  char *v42; // [rsp+50h] [rbp-B0h]
  __int64 *v43; // [rsp+58h] [rbp-A8h]
  char v44[8]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v45[2]; // [rsp+68h] [rbp-98h] BYREF
  char *v46; // [rsp+70h] [rbp-90h]
  _DWORD v47[2]; // [rsp+78h] [rbp-88h] BYREF
  _DWORD *v48; // [rsp+80h] [rbp-80h]
  char v49; // [rsp+88h] [rbp-78h] BYREF
  __int64 v50; // [rsp+90h] [rbp-70h]
  __int64 v51; // [rsp+98h] [rbp-68h] BYREF
  _DWORD v52[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v53; // [rsp+A8h] [rbp-58h]
  _DWORD v54[2]; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD *v55; // [rsp+B8h] [rbp-48h]
  char v56; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v57; // [rsp+4C0h] [rbp+3C0h]

  v11 = *a4;
  v50 = a3;
  v15 = 0;
  v16 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *, _QWORD))(v11 + 808))(
          a1,
          a2,
          a3,
          a4,
          a5: __imp_api-ms-win-crt-heap-l1-1-0.dll!malloc);
  v19 = v16;
  if ( v16 != 0 )
  {
    v22 = v16;
  }
  else
  {
    v20 = MEMORY[0x79ad0]/* 0x79ad0 */(a1: v18, a2: 0, a3: v17, a4: 16);
    if ( v20 == 0 )
    {
      JNU_ThrowOutOfMemoryError(a1: 0, a2: v21, a3: 533920, a4);
      return sub_132C8DE0(a1: v24, a2: v25, a3: v23, a4: (unsigned __int64)&v33 ^ v57, a5: v26, a6: v27);
    }
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64 *, _QWORD, __int64))(*a4 + 880))(
      a1: v20,
      a2: v21,
      a3: v50,
      a4,
      a5: MEMORY[0x337520]/* 0x337520 */,
      a6: v20);
  }
  v47[0] = 0;
  v48 = v45;
  v46 = &v56;
  v47[1] = 1;
  v45[0] = 1024;
  v45[1] = 2;
  if ( a6 != 0 )
  {
    v15 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *, char *))(*a4 + 1472))(
            a1: v22,
            a2: v19,
            a3: a6,
            a4,
            a5: v44);
    if ( v15 == 0 )
      return sub_132C8DE0(a1: v24, a2: v25, a3: v23, a4: (unsigned __int64)&v33 ^ v57, a5: v26, a6: v27);
    v28 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*a4 + 1368))(a1: v24, a2: v25, a3: a6, a4);
    v54[0] = 0;
    v55 = v52;
    v54[1] = 1;
    v52[0] = v28;
    v52[1] = 2;
    v53 = v15;
  }
  v43 = &v51;
  v42 = &v49;
  v41 = v47;
  v40 = v22;
  v39 = 0;
  v38 = (unsigned __int64)v54 & -(__int64)(a6 != 0);
  v37 = 16;
  LODWORD(v36) = 0;
  v24 = (unsigned int)sub_1932CA329(a1: v22, a2: v19, a3: v19, a4: a5, a5: 0, a6: 0);
  if ( v15 != 0 )
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64 *, __int64, __int64))(*a4 + 1536))(
      a1: v24,
      a2: v25,
      a3: a6,
      a4,
      a5: v15,
      a6: 2);
  if ( (int)v24 < 0
    || (unsigned int)(v24 - 590611) <= 1
    && (v29 = sub_1932CA32F(a1: v24, a2: v25, a3: v47, a4: v25), v24 = (unsigned int)v29, v29 < 0) )
  {
    sub_132AE49C(a1: v24, a2: v25, a3: v25, a4: a5, a5: (_DWORD)a4, a6: a11, a7: v33, a8: v34, a9: v35);
  }
  else
  {
    v23 = v45[0];
    if ( v45[0] != 0 )
    {
      v30 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(*a4 + 1408))(
              a1: v24,
              a2: v25,
              a3: v45[0],
              a4);
      if ( v30 != 0 )
      {
        v31 = *(void (__fastcall **)(__int64, __int64, __int64, __int64 *, _QWORD, _QWORD))(*a4 + 1664);
        v36 = v46;
        v31(a1: v24, a2: v25, a3: v30, a4, a5: 0, a6: v45[0]);
      }
      if ( a6 != 0 )
        sub_132AE49C(a1: v24, a2: v25, a3: v25, a4: a5, a5: (_DWORD)a4, a6: a11, a7: v33, a8: v34, a9: v35);
    }
    if ( (_DWORD)v24 == 590612 )
      sub_132AE49C(a1: 590612, a2: v25, a3: v25, a4: a5, a5: (_DWORD)a4, a6: a11, a7: v33, a8: v34, a9: v35);
  }
  return sub_132C8DE0(a1: v24, a2: v25, a3: v23, a4: (unsigned __int64)&v33 ^ v57, a5: v26, a6: v27);
}
