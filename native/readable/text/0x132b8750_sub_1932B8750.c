// sub_132B8750
// rva 0x132b8750  size 665  section .text  group text
// window base 0x1932b8750: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132B8750(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // eax
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rsi
  unsigned int v11; // ebx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rbx
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rdi
  __int64 v35; // rsi
  int v36; // eax
  int v37; // edi
  int v38; // esi
  int v39; // r9d
  __int64 v40; // rdx
  __int64 v41; // rdi
  __int64 v42; // rsi
  __int64 v43; // rdi
  __int64 v44; // rsi
  _BYTE *v45; // rbx
  _BYTE *v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rsi
  __int64 v52; // rdi
  __int64 v53; // rdx
  __int64 v54; // rdi
  __int64 v55; // rsi
  int v56; // eax
  int v57; // edi
  int v58; // esi
  int v59; // [rsp+0h] [rbp-100h] BYREF
  __int64 v60; // [rsp+8h] [rbp-F8h]
  __int64 v61; // [rsp+10h] [rbp-F0h]
  __int64 v62; // [rsp+18h] [rbp-E8h]
  unsigned int v63; // [rsp+20h] [rbp-E0h]
  _BYTE v64[8]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v65; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v66; // [rsp+40h] [rbp-C0h]
  __int64 v67; // [rsp+48h] [rbp-B8h]
  __int64 v68; // [rsp+50h] [rbp-B0h]
  _BYTE v69[1024]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v70; // [rsp+460h] [rbp+360h] BYREF

  v5 = __imp_KERNEL32.dll!GetUserGeoID(a1: 0, a2: a4, a3, a4: 16);
  LOWORD(v63) = v6;
  if ( (unsigned int)__imp_KERNEL32.dll!GetGeoInfoA(a1: v6, a2: v7, a3: (unsigned int)(v6 + 4), a4: v5, a5: v64) == 0 )
  {
    v11 = __imp_KERNEL32.dll!GetUserDefaultLCID(a1: v9, a2: v10);
    if ( (unsigned int)__imp_KERNEL32.dll!GetLocaleInfoA(
                         a1: v12,
                         a2: v13,
                         a3: (unsigned int)(v12 + 90),
                         a4: v11,
                         a5: v64,
                         a6: (unsigned int)(v12 + 4)) == 0
      && (unsigned int)__imp_KERNEL32.dll!GetLocaleInfoA(
                         a1: v9,
                         a2: v10,
                         a3: (unsigned int)(v9 + 104),
                         a4: v11,
                         a5: v64,
                         a6: (unsigned int)(v9 + 4)) == 0 )
    {
      v64[0] = v9;
    }
  }
  v14 = sub_1932CA1FD(a1: v9, a2: v10, a3: v8, a4: v10);
  v18 = sub_1932CA1FD(a1: v16, a2: v17, a3: v15, a4: 545096);
  v22 = __imp_api-ms-win-crt-heap-l1-1-0.dll!malloc(a1: v20, a2: v21, a3: v19, a4: v14 + v18 + 1);
  v28 = v22;
  if ( v22 != 0 )
  {
    sub_1932CA27B(a1: v24, a2: v25, a3: v25, a4: v22);
    sub_1932CA281(a1: v29, a2: v30, a3: 545096, a4: v28);
    if ( (unsigned int)__imp_api-ms-win-crt-stdio-l1-1-0.dll!fopen_s(a1: v31, a2: v32, a3: v28, a4: &v65, a5: 545112) != 0 )
    {
      v36 = __imp_api-ms-win-crt-stdio-l1-1-0.dll!__acrt_iob_func(a1: v34, a2: v35, a3: v33, a4: 2);
      sub_132C8AA0(a1: v37, a2: v38, a3: 545120, a4: v36, a5: v28, a6: v39, a7: v59, a8: v60, a9: v61, a10: v62);
      __imp_api-ms-win-crt-heap-l1-1-0.dll!free(a1: v41, a2: v42, a3: v40, a4: v28);
    }
    else
    {
      __imp_api-ms-win-crt-heap-l1-1-0.dll!free(a1: v34, a2: v35, a3: v33, a4: v28);
      v44 = (unsigned int)v43;
      while ( __imp_api-ms-win-crt-stdio-l1-1-0.dll!fgets(a1: v43, a2: v44, a3: 1024, a4: v69, a5: v65) != 0 )
      {
        v45 = v69;
        v44 = (unsigned int)(v50 + 1);
        v46 = v69;
        if ( v69[0] != 35 && v69[0] != 10 )
        {
          v47 = v43;
          do
          {
            *(&v66 + v47) = (__int64)v46;
            if ( *v45 == (_BYTE)v43 )
            {
LABEL_28:
              v52 = 533704;
              goto LABEL_29;
            }
            do
            {
              if ( *v45 == 58 )
                break;
              if ( ++v45 >= (_BYTE *)&v70 )
              {
                v52 = 533680;
                goto LABEL_29;
              }
            }
            while ( *v45 != (_BYTE)v43 );
            if ( *v45 == (_BYTE)v43 )
              goto LABEL_28;
            *v45 = v43;
            ++v47;
            v46 = ++v45;
          }
          while ( v47 < 3 );
          if ( *v45 != 10 )
          {
            v52 = 533736;
LABEL_29:
            __imp_api-ms-win-crt-stdio-l1-1-0.dll!fclose(a1: v52, a2: v44, a3: v49, a4: v65);
            v56 = __imp_api-ms-win-crt-string-l1-1-0.dll!_strdup(a1: v54, a2: v55, a3: v53, a4: 2);
            v63 = (_DWORD)v45 - (unsigned int)v69;
            sub_132C8AA0(a1: v57, a2: v58, a3: 533800, a4: v56, a5: v57, a6: v58, a7: v59, a8: v60, a9: v61, a10: v62);
            return sub_132C8DE0(a1: v24, a2: v25, a3: v23, a4: (unsigned __int64)&v59 ^ v70, a5: v26, a6: v27);
          }
          if ( (unsigned int)sub_1932CA1F7(a1: v43, a2: v44, a3, a4: v66) == 0
            && ((unsigned int)sub_1932CA1F7(a1: v43, a2: v44, a3: v64, a4: v67) == 0
             || (unsigned int)sub_1932CA1F7(a1: v43, a2: v44, a3: 533772, a4: v67) == 0) )
          {
            v43 = __imp_api-ms-win-crt-stdio-l1-1-0.dll!fclose(a1: v43, a2: v44, a3: v48, a4: v68);
            break;
          }
        }
      }
      __imp_api-ms-win-crt-stdio-l1-1-0.dll!__acrt_iob_func(a1: v43, a2: v50, a3: v49, a4: v65);
    }
  }
  return sub_132C8DE0(a1: v24, a2: v25, a3: v23, a4: (unsigned __int64)&v59 ^ v70, a5: v26, a6: v27);
}
