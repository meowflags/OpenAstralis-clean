// Java_java_lang_ProcessHandleImpl_getProcessPids0
// rva 0x132b4644  size 793  section .text  group text
// window base 0x1932b4644: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall Java_java_lang_ProcessHandleImpl_getProcessPids0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        int a9,
        int a10,
        __int64 a11,
        __int64 a12)
{
  __int64 v12; // rax
  __int64 v14; // r12
  __int64 v15; // r15
  __int64 v16; // rbp
  __int64 v17; // r13
  __int64 (__fastcall *v18)(_QWORD, __int64, __int64); // r8
  int v19; // eax
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // r14d
  __int64 v27; // rdi
  __int64 v28; // rsi
  int v29; // r14d
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // r14
  __int64 v36; // rdi
  __int64 v37; // rsi
  __int64 v38; // rdx
  __int64 v39; // rdi
  _QWORD *v40; // rsi
  int v41; // r9d
  _QWORD *v42; // rcx
  __int64 v43; // r15
  int v44; // r12d
  __int64 v45; // rax
  int v46; // eax
  __int64 v48; // [rsp+0h] [rbp-1E8h] BYREF
  int v49; // [rsp+8h] [rbp-1E0h]
  int v50; // [rsp+10h] [rbp-1D8h]
  int v51; // [rsp+20h] [rbp-1C8h]
  __int64 v52; // [rsp+28h] [rbp-1C0h]
  __int64 v53; // [rsp+30h] [rbp-1B8h]
  __int64 v54; // [rsp+38h] [rbp-1B0h]
  __int64 v55; // [rsp+40h] [rbp-1A8h]
  __int64 v56; // [rsp+48h] [rbp-1A0h]
  _QWORD *v57; // [rsp+50h] [rbp-198h]
  __int64 v58; // [rsp+58h] [rbp-190h]
  __int64 v59; // [rsp+60h] [rbp-188h]
  int v60; // [rsp+70h] [rbp-178h] BYREF
  unsigned int v61; // [rsp+78h] [rbp-170h]
  unsigned int v62; // [rsp+90h] [rbp-158h]
  __int64 v63; // [rsp+1A0h] [rbp-48h]

  v12 = *(_QWORD *)a4;
  v14 = a11;
  v15 = a12;
  v16 = 0;
  v54 = a5;
  v17 = 0;
  v18 = *(__int64 (__fastcall **)(_QWORD, __int64, __int64))(v12 + 1368);
  v55 = a3;
  v53 = a6;
  v59 = a11;
  v58 = a12;
  v19 = v18(a1: 0, a2, a3: a6);
  if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)a4 + 1824LL))(
         a1: v20,
         a2: v19,
         a3: *(_QWORD *)(*(_QWORD *)a4 + 1824LL),
         a4) == 0 )
  {
    if ( a11 != 0 )
    {
      v26 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 1368LL))(
              a1: v22,
              a2: v23,
              a3: a11,
              a4);
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)a4 + 1824LL))(
             a1: v27,
             a2: v28,
             a3: *(_QWORD *)(*(_QWORD *)a4 + 1824LL),
             a4) != 0 )
        return sub_1932C8DE0(a1: v22, a2: v23, a3: v21, a4: (unsigned __int64)&v48 ^ v63, a5: v24, a6: v25);
      if ( (_DWORD)v23 != v26 )
      {
LABEL_8:
        sub_1932B15A0(a1: v22, a2: v23, a3: 544096, a4);
        return sub_1932C8DE0(a1: v22, a2: v23, a3: v21, a4: (unsigned __int64)&v48 ^ v63, a5: v24, a6: v25);
      }
    }
    if ( a12 != 0 )
    {
      v29 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 1368LL))(
              a1: v22,
              a2: v23,
              a3: a12,
              a4);
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)a4 + 1824LL))(
             a1: v30,
             a2: v31,
             a3: *(_QWORD *)(*(_QWORD *)a4 + 1824LL),
             a4) != 0 )
        return sub_1932C8DE0(a1: v22, a2: v23, a3: v21, a4: (unsigned __int64)&v48 ^ v63, a5: v24, a6: v25);
      if ( (_DWORD)v23 != v29 )
        goto LABEL_8;
    }
    v32 = sub_1932CA149(a1: v22, a2: v23, a3: 0, a4: 2);
    v35 = v32;
    if ( v32 == -1 )
    {
      JNU_ThrowByName(a1: v33, a2: v34, a3: 544016, a4, a5: 544072);
    }
    else
    {
      v60 = 304;
      if ( (unsigned int)sub_1932CA14F(a1: v33, a2: v34, a3: &v60, a4: v32) != 0 )
      {
        v52 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a4 + 1504LL))(
                a1: v36,
                a2: v37,
                a3: v53,
                a4,
                a5: 0);
        if ( v52 != 0 )
        {
          if ( (a11 == 0
             || (v39 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64, __int64, _QWORD))(*(_QWORD *)a4 + 1504LL))(
                         a1: v39,
                         a2: v40,
                         a3: a11,
                         a4,
                         a5: 0)) != 0)
            && (a12 == 0
             || (v16 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64, __int64, _QWORD))(*(_QWORD *)a4 + 1504LL))(
                         a1: v39,
                         a2: v40,
                         a3: a12,
                         a4,
                         a5: 0)) != 0) )
          {
            v42 = v40;
            v43 = v52 - v39;
            v57 = v40;
            v40 = (_QWORD *)v39;
            v44 = 0;
            v56 = v16 - v39;
            do
            {
              if ( (_DWORD)v54 == 0 || v62 != 0 && v62 == (_DWORD)v54 )
              {
                if ( v17 < (__int64)v42 )
                {
                  *(_QWORD *)((char *)v40 + v43) = v61;
                  if ( v39 != 0 )
                    *v40 = v62;
                  if ( v16 != 0 )
                  {
                    v45 = sub_1932B4960(
                            a1: v39,
                            a2: (_DWORD)v40,
                            a3: v55,
                            a4,
                            a5: v61,
                            a6: v41,
                            a7: v48,
                            a8: v49,
                            a9: v50);
                    *(_QWORD *)((char *)v40 + v56) = v45;
                  }
                }
                ++v44;
                ++v17;
                ++v40;
              }
              v46 = sub_1932CA155(a1: v39, a2: v40, a3: &v60, a4: v35);
              v42 = v57;
            }
            while ( v46 != 0 );
            v15 = v58;
            v51 = v44;
            v14 = v59;
          }
          (*(void (__fastcall **)(__int64, _QWORD *, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a4 + 1568LL))(
            a1: v39,
            a2: v40,
            a3: v53,
            a4,
            a5: v52,
            a6: 0);
          if ( v39 != 0 )
            (*(void (__fastcall **)(__int64, _QWORD *, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a4 + 1568LL))(
              a1: v39,
              a2: v40,
              a3: v14,
              a4,
              a5: v39,
              a6: 0);
          if ( v16 != 0 )
            (*(void (__fastcall **)(__int64, _QWORD *, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a4 + 1568LL))(
              a1: v39,
              a2: v40,
              a3: v15,
              a4,
              a5: v16,
              a6: 0);
        }
      }
      else
      {
        JNU_ThrowByName(a1: v36, a2: v37, a3: 544016, a4, a5: 544072);
      }
      MEMORY[0x797C8](a1: v39, a2: v40, a3: v38, a4: v35);
    }
  }
  return sub_1932C8DE0(a1: v22, a2: v23, a3: v21, a4: (unsigned __int64)&v48 ^ v63, a5: v24, a6: v25);
}
