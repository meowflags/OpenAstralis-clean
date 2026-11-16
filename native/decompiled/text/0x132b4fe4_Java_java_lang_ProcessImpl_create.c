// Java_java_lang_ProcessImpl_create
// rva 0x132b4fe4  size 560  section .text  group text
// window base 0x1932b4fe4: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall Java_java_lang_ProcessImpl_create(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        int a10,
        __int64 a11,
        __int64 a12)
{
  __int64 v14; // rbp
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rbx
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // rbx
  __int64 v29; // rbx
  int v30; // edi
  int v31; // esi
  __int64 v32; // rdx
  __int64 v33; // rdi
  __int64 v34; // rsi
  __int64 v36; // [rsp+30h] [rbp-48h]
  __int64 v37; // [rsp+38h] [rbp-40h]
  __int64 v38; // [rsp+40h] [rbp-38h]
  __int64 v39; // [rsp+90h] [rbp+18h]

  v36 = 0;
  v14 = 0;
  if ( a5 != 0 && a12 != 0 )
  {
    v39 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a4 + 1320LL))(
            a1: a4,
            a2,
            a3: a5,
            a4,
            a5: 0);
    v17 = v39;
    if ( v39 != 0 )
    {
      if ( a6 != 0 )
        v18 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v15 + 1320LL))(
                a1: v15,
                a2: v16,
                a3: a6,
                a4: v15,
                a5: 0);
      else
        v18 = 0;
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v15 + 1824LL))(
             a1: v15,
             a2: v18,
             a3: *(_QWORD *)(*(_QWORD *)v15 + 1824LL),
             a4: v15) == 0 )
      {
        if ( a11 != 0 )
          v14 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v19 + 1320LL))(
                  a1: v19,
                  a2: v20,
                  a3: a11,
                  a4: v19,
                  a5: 0);
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v19 + 1824LL))(
               a1: v19,
               a2: v20,
               a3: *(_QWORD *)(*(_QWORD *)v19 + 1824LL),
               a4: v19) == 0 )
        {
          v38 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v19 + 1504LL))(
                  a1: v19,
                  a2: v20,
                  a3: a12,
                  a4: v19,
                  a5: 0);
          if ( v38 != 0 )
          {
            v21 = (*(int (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v19 + 1312LL))(
                    a1: v19,
                    a2: v20,
                    a3: a5,
                    a4: v19);
            v25 = MEMORY[0x79AD0](a1: v23, a2: v24, a3: v22, a4: 2 * v21 + 2);
            v37 = v25;
            if ( v25 != 0 )
            {
              v28 = 2 * v21;
              sub_1932CA15B(a1: v26, a2: v27, a3: v39, a4: v25, a5: v28);
              *(_WORD *)(v28 + v37) = 0;
              v29 = v38;
              v36 = sub_1932B54D4(a1: v30, a2: v31, a3: v39, a4: v30, a5: v31, a6: v14);
              MEMORY[0x79AE0](a1: v33, a2: v34, a3: v32, a4: v37);
            }
            else
            {
              v29 = v38;
            }
            (*(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v26 + 1568LL))(
              a1: v26,
              a2: v27,
              a3: a12,
              a4: v26,
              a5: v29,
              a6: 0);
            v17 = v39;
          }
          if ( v14 != 0 )
            (*(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v19 + 1328LL))(
              a1: v19,
              a2: v20,
              a3: a11,
              a4: v19,
              a5: v14);
        }
        if ( v20 != 0 )
          (*(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v19 + 1328LL))(
            a1: v19,
            a2: v20,
            a3: a6,
            a4: v19,
            a5: v20);
        v14 = v36;
      }
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v19 + 1328LL))(
        a1: v19,
        a2: v20,
        a3: a5,
        a4: v19,
        a5: v17);
    }
  }
  return v14;
}
