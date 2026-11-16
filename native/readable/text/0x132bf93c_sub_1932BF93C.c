// sub_132BF93C
// rva 0x132bf93c  size 1265  section .text  group text
// window base 0x1932bf93c: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_QWORD *__fastcall sub_132BF93C(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  _QWORD *result; // rax
  int v8; // esi
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rbp
  __int64 v19; // r15
  __int64 v20; // rbx
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r14
  unsigned __int64 v24; // rdx
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rbx
  _BYTE *v28; // rax
  unsigned __int64 v29; // r13
  int v30; // r9d
  int v31; // r8d
  int v32; // r9d
  int v33; // r10d
  unsigned __int64 v34; // r8
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rdi
  __int64 v39; // rsi
  __int64 v40; // rdx
  __int64 v41; // rdi
  __int64 v42; // rsi
  __int64 v43; // rdx
  __int64 v44; // rdi
  __int64 v45; // rsi
  unsigned __int64 v51; // [rsp+78h] [rbp+20h]
  int v52; // [rsp+78h] [rbp+20h]

  result = (_QWORD *)__imp_api-ms-win-crt-heap-l1-1-0.dll!malloc(a1, a2: a5, a3, a4: 72);
  if ( result != nullptr )
  {
    *result = 0;
    result[6] = 0;
    result[5] = 0;
    v11 = *(_QWORD *)(a3 + 8);
    if ( v8 != 0 )
      v12 = sub_132C0570(a1: (_DWORD)result, a2: v8, a3: v11, a4, a5: v9, a6: v10);
    else
      v12 = sub_132C03D4(a1: (_DWORD)result, a2: 0, a3: v11, a4, a5: 160, a6: v10);
    v15 = v12;
    if ( v12 == 0 )
      goto LABEL_34;
    v16 = *(unsigned __int8 *)(v12 + 29);
    v17 = *(unsigned __int8 *)(v12 + 28);
    v18 = *(unsigned __int16 *)(v12 + 30);
    v19 = *(unsigned __int16 *)(v12 + 32);
    v20 = (unsigned int)v17 | (*(unsigned __int8 *)(v12 + 29) << 8);
    *(_QWORD *)(v14 + 8) = *(unsigned __int8 *)(v12 + 12)
                         | ((*(unsigned __int8 *)(v12 + 13) | ((unsigned __int64)*(unsigned __int16 *)(v12 + 14) << 8)) << 8);
    *(_QWORD *)(v14 + 16) = *(unsigned __int8 *)(v12 + 24)
                          | ((*(unsigned __int8 *)(v12 + 25) | ((unsigned __int64)*(unsigned __int16 *)(v12 + 26) << 8)) << 8);
    v21 = *(_WORD *)(v12 + 10) != 0
        ? *(unsigned __int8 *)(v12 + 20)
        | ((*(unsigned __int8 *)(v12 + 21) | ((unsigned __int64)*(unsigned __int16 *)(v12 + 22) << 8)) << 8)
        : 0LL;
    *(_QWORD *)(v14 + 24) = v21;
    *(_DWORD *)(v14 + 32) = *(unsigned __int8 *)(v12 + 16)
                          | ((*(unsigned __int8 *)(v12 + 17) | (*(unsigned __int16 *)(v12 + 18) << 8)) << 8);
    v51 = *(unsigned __int8 *)(v12 + 42)
        | ((*(unsigned __int8 *)(v12 + 43) | ((unsigned __int64)*(unsigned __int16 *)(v12 + 44) << 8)) << 8);
    *(_QWORD *)(v14 + 56) = -(__int64)(*(_QWORD *)(a4 + 160) + v51);
    *(_DWORD *)(v14 + 64) = *(unsigned __int16 *)(v12 + 8);
    v22 = __imp_api-ms-win-crt-heap-l1-1-0.dll!malloc(a1: v14, a2: v12, a3: v16, a4: (v17 | (v16 << 8)) + 1);
    *(_QWORD *)v14 = v22;
    if ( v22 == 0 )
      goto LABEL_34;
    v23 = (unsigned int)v20;
    sub_1932CA15B(a1: v14, a2: v15, a3: v15 + 46, a4: v22, a5: (unsigned int)v20);
    *(_BYTE *)(v20 + *(_QWORD *)v25) = 0;
    *(_DWORD *)(v25 + 68) = v20;
    if ( (_DWORD)v18 != 0 )
    {
      v27 = v26 + v20;
      v28 = (_BYTE *)__imp_api-ms-win-crt-heap-l1-1-0.dll!malloc(a1: v25, a2: v26, a3: v24, a4: v18 + 2);
      *(_QWORD *)(v14 + 48) = v28;
      if ( v28 == nullptr )
        goto LABEL_34;
      *v28 = v18;
      *(_BYTE *)(*(_QWORD *)(v14 + 48) + 1LL) = BYTE1(v18);
      sub_1932CA15B(a1: v14, a2: v15, a3: v27 + 46, a4: *(_QWORD *)(v14 + 48) + 2LL, a5: (unsigned int)v18);
      v29 = v51;
      if ( *(_QWORD *)(v25 + 24) == 0xFFFFFFFFLL || *(_QWORD *)(v25 + 16) == 0xFFFFFFFFLL || v51 == 0xFFFFFFFF )
      {
        v30 = 0;
        if ( (unsigned int)v18 > 4 )
        {
          while ( 1 )
          {
            v24 = v30;
            v31 = v30;
            v52 = v30;
            v32 = v30 + 4;
            v33 = *(unsigned __int16 *)(v24 + v27 + 48);
            if ( *(_WORD *)(v24 + v27 + 46) == 1 )
              break;
            v30 = v33 + v32;
            if ( v30 + 4 >= (int)v18 )
              goto LABEL_31;
          }
          if ( *(_QWORD *)(v25 + 16) == 0xFFFFFFFFLL )
          {
            if ( (unsigned int)v33 < 8 || v32 + 8 > (int)v18 )
              goto LABEL_31;
            v34 = *(unsigned __int8 *)(v52 + 8 + v27 + 46)
                | ((*(unsigned __int8 *)(v52 + 9 + v27 + 46)
                  | ((((unsigned __int64)*(unsigned __int8 *)(v24 + v27 + 57) << 8)
                    | *(unsigned __int8 *)(v31 + 10 + v27 + 46)) << 8)) << 8);
            v35 = v32;
            v32 += 8;
            v24 = *(unsigned __int8 *)(v35 + v27 + 46)
                | ((*(unsigned __int8 *)(v52 + 5 + v27 + 46)
                  | ((*(unsigned __int8 *)(v52 + 6 + v27 + 46)
                    | ((unsigned __int64)*(unsigned __int8 *)(v52 + 7 + v27 + 46) << 8)) << 8)) << 8);
            *(_QWORD *)(v25 + 16) = v24 | (v34 << 32);
            v33 -= 8;
          }
          if ( *(_QWORD *)(v25 + 24) == 0xFFFFFFFFLL )
          {
            if ( v33 < 8 || v32 + 8 > (int)v18 )
              goto LABEL_31;
            v24 = v32;
            v32 += 8;
            *(_QWORD *)(v25 + 24) = *(unsigned __int8 *)(v24 + v27 + 46)
                                  | ((*(unsigned __int8 *)(v24 + v27 + 47)
                                    | ((unsigned __int64)*(unsigned __int16 *)(v24 + v27 + 48) << 8)) << 8)
                                  | ((*(unsigned __int8 *)(v24 + v27 + 50)
                                    | ((*(unsigned __int8 *)(v24 + v27 + 51)
                                      | ((unsigned __int64)*(unsigned __int16 *)(v24 + v27 + 52) << 8)) << 8)) << 32);
            v33 -= 8;
          }
          if ( v29 == 0xFFFFFFFF && v33 >= 8 && v32 + 8 <= (int)v18 )
          {
            v24 = v32;
            *(_QWORD *)(v25 + 56) = -(__int64)(*(_QWORD *)(a4 + 160)
                                             + (*(unsigned __int8 *)(v32 + v27 + 46)
                                              | ((*(unsigned __int8 *)(v32 + v27 + 47)
                                                | ((unsigned __int64)*(unsigned __int16 *)(v32 + v27 + 48) << 8)) << 8)
                                              | ((*(unsigned __int8 *)(v32 + v27 + 50)
                                                | ((*(unsigned __int8 *)(v32 + v27 + 51)
                                                  | ((unsigned __int64)*(unsigned __int16 *)(v32 + v27 + 52) << 8)) << 8)) << 32)));
          }
        }
      }
    }
LABEL_31:
    if ( (_DWORD)v19 != 0 )
    {
      v36 = __imp_api-ms-win-crt-heap-l1-1-0.dll!malloc(a1: v25, a2: v26, a3: v24, a4: (unsigned int)(v19 + 1));
      *(_QWORD *)(v14 + 40) = v36;
      if ( v36 != 0 )
      {
        sub_1932CA15B(a1: v14, a2: v15, a3: v15 + v23 + (unsigned int)v18 + 46LL, a4: v36, a5: (unsigned int)v19);
        *(_BYTE *)(v19 + *(_QWORD *)(v25 + 40)) = 0;
        goto LABEL_35;
      }
LABEL_34:
      __imp_api-ms-win-crt-heap-l1-1-0.dll!free(a1: v14, a2: v15, a3: v13, a4: *(_QWORD *)v14);
      __imp_api-ms-win-crt-heap-l1-1-0.dll!free(a1: v38, a2: v39, a3: v37, a4: *(_QWORD *)(v38 + 48));
      __imp_api-ms-win-crt-heap-l1-1-0.dll!free(a1: v41, a2: v42, a3: v40, a4: *(_QWORD *)(v41 + 40));
      __imp_api-ms-win-crt-heap-l1-1-0.dll!free(a1: v44, a2: v45, a3: v43, a4: v44);
      v25 = 0;
      if ( v26 == 0 )
        return (_QWORD *)v25;
    }
LABEL_35:
    if ( a5 == 0 )
      __imp_api-ms-win-crt-heap-l1-1-0.dll!free(a1: v25, a2: v26, a3: v24, a4: v26);
    return (_QWORD *)v25;
  }
  return result;
}
