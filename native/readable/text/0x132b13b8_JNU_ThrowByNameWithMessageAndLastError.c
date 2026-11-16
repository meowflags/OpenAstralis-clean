// JNU_ThrowByNameWithMessageAndLastError
// rva 0x132b13b8  size 424  section .text  group text
// window base 0x1932b13b8: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall JNU_ThrowByNameWithMessageAndLastError(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6)
{
  int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdi
  int v15; // esi
  __int64 v16; // r15
  __int64 v17; // r8
  int v18; // edx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // r12
  __int64 v22; // rdx
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 result; // rax
  __int64 v28; // r15
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // [rsp+0h] [rbp-48h]
  __int64 v35; // [rsp+8h] [rbp-40h]
  __int64 v36; // [rsp+10h] [rbp-38h]
  __int64 v37; // [rsp+18h] [rbp-30h]

  if ( a5 != 0 )
    v9 = sub_1932CA1FD(a1, a2, a3, a4: a5);
  else
    v9 = 0;
  v12 = sub_132B8AE0(a1: v9, a2, a3, a4, a5, a6);
  if ( v12 != 0 )
  {
    if ( v11 != 0 )
    {
      v13 = __imp_api-ms-win-crt-heap-l1-1-0.dll!malloc(a1: v11, a2: v12, a3: v10, a4: v11 + 4);
      v16 = v13;
      if ( v13 == 0 )
      {
        v17 = 0;
        v18 = 538568;
        return JNU_ThrowByName(a1: v14, a2: v15, a3: v18, a4, a5: v17);
      }
      jio_snprintf(a1: v14, a2: v15, a3: v14 + 4, a4: v13, a5: 542664, a6: a5);
      v21 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 1336LL))(
              a1: v19,
              a2: v20,
              a3: v16,
              a4);
      __imp_api-ms-win-crt-heap-l1-1-0.dll!free(a1: v23, a2: v24, a3: v22, a4: v16);
      result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)a4 + 1824LL))(
                 a1: v25,
                 a2: v26,
                 a3: *(_QWORD *)(*(_QWORD *)a4 + 1824LL),
                 a4);
      if ( (_BYTE)result != 0 )
        return result;
      if ( v21 != 0 )
      {
        v28 = JNU_CallMethodByName(a1: v11, a2: v12, a3: 0, a4, a5: v12, a6: 542712);
        (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 184LL))(
          a1: v29,
          a2: v30,
          a3: v21,
          a4);
        result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)a4 + 1824LL))(
                   a1: v31,
                   a2: v32,
                   a3: *(_QWORD *)(*(_QWORD *)a4 + 1824LL),
                   a4);
        if ( (_BYTE)result != 0 )
          return result;
        if ( v28 != 0 )
        {
          (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 184LL))(
            a1: v11,
            a2: v12,
            a3: v12,
            a4);
          v12 = v28;
        }
      }
    }
    v33 = JNU_NewObjectByName(a1: v11, a2: v12, a3, a4, a5: 542640, a6: v12, a7: v34, a8: v35, a9: v36, a10: v37);
    if ( v33 != 0 )
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 104LL))(
        a1: v11,
        a2: v12,
        a3: v33,
        a4);
  }
  result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)a4 + 1824LL))(
             a1: v11,
             a2: v12,
             a3: *(_QWORD *)(*(_QWORD *)a4 + 1824LL),
             a4);
  if ( (_BYTE)result != 0 )
    return result;
  v18 = a3;
  v17 = a5;
  if ( v14 == 0 )
    v17 = 541760;
  return JNU_ThrowByName(a1: v14, a2: v15, a3: v18, a4, a5: v17);
}
