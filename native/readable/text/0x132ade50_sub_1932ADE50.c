// sub_132ADE50
// rva 0x132ade50  size 331  section .text  group text
// window base 0x1932ade50: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132ADE50(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9,
        int a10)
{
  _QWORD *v12; // rbp
  __int64 v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rsi
  _WORD *v16; // rax
  __int64 v17; // rsi
  _WORD *v18; // rdi
  __int64 v19; // rsi
  _WORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rdx
  _QWORD *v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rsi
  int v32; // [rsp+0h] [rbp-58h]
  __int64 v33; // [rsp+8h] [rbp-50h]
  __int64 v34; // [rsp+10h] [rbp-48h]
  __int64 v35; // [rsp+18h] [rbp-40h]
  _QWORD v36[7]; // [rsp+20h] [rbp-38h] BYREF

  v36[0] = 0;
  v12 = nullptr;
  v13 = __imp_api-ms-win-crt-string-l1-1-0.dll!wcstok_s(a1, a2: 0, a3: 538936, a4, a5: v36);
  if ( v13 != 0 )
  {
    while ( 1 )
    {
      a10 = 0;
      v16 = (_WORD *)sub_1932CA167(a1: v14, a2: v15, a3: 61, a4: v13);
      v18 = v16;
      if ( v16 == nullptr )
        goto LABEL_5;
      *v16 = 0;
      if ( (unsigned int)__imp_api-ms-win-crt-string-l1-1-0.dll!wcscmp(a1: v16, a2: v17, a3, a4: v13) == 0 )
        break;
LABEL_16:
      v13 = __imp_api-ms-win-crt-heap-l1-1-0.dll!malloc(a1: v18, a2: v17, a3: 538936, a4: 0, a5: v36);
      if ( v13 == 0 )
        return (unsigned int)v15;
    }
    v13 = (__int64)(v18 + 1);
LABEL_5:
    if ( sub_1932CA16D(a1: v18, a2: v17, a3: 538992, a4: v13) != 0 )
      JUMPOUT(0x326507EECLL);
    v20 = (_WORD *)sub_1932CA167(a1: v13, a2: v19, a3: 58, a4: v13);
    if ( v20 != nullptr )
    {
      *v20 = 0;
      sub_1329E630(
        a1: v22,
        a2: v23,
        a3: 539000,
        a4: (__int64)(v20 + 1),
        a5: (__int64)&a10,
        a6: v24,
        a7: v32,
        a8: v33,
        a9: v34,
        a10: v35);
    }
    v25 = __imp_api-ms-win-crt-string-l1-1-0.dll!_wcsdup(a1: v22, a2: v23, a3: v21, a4: 24);
    v27 = (_QWORD *)v25;
    if ( v25 != 0 )
    {
      *(_QWORD *)(v25 + 16) = 0;
      *(_DWORD *)(v25 + 8) = a10;
      v28 = __imp_api-ms-win-crt-heap-l1-1-0.dll!free(a1: v18, a2: v17, a3: v26, a4: v18);
      *v27 = v28;
      if ( v28 != 0 )
      {
        if ( *a5 == 0 )
          *a5 = v27;
        if ( v12 != nullptr )
          v12[2] = v27;
        v12 = v27;
        v17 = (unsigned int)(v30 + 1);
      }
      else
      {
        __imp_api-ms-win-crt-string-l1-1-0.dll!wcstok_s(a1: v18, a2: v30, a3: v29, a4: v27);
      }
    }
    goto LABEL_16;
  }
  return (unsigned int)v15;
}
