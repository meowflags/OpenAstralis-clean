// sub_132B826C
// rva 0x132b826c  size 1251  section .text  group text
// window base 0x1932b826c: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132B826C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // ecx
  int v10; // eax
  __int16 *v11; // r12
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // rsi
  int v20; // esi
  __int64 v21; // rdi
  __int64 v22; // rsi
  int v24; // [rsp+0h] [rbp-100h] BYREF
  int v25; // [rsp+8h] [rbp-F8h]
  int v26; // [rsp+10h] [rbp-F0h]
  int v27; // [rsp+18h] [rbp-E8h]
  __int64 *v28; // [rsp+20h] [rbp-E0h]
  int *v29; // [rsp+28h] [rbp-D8h]
  __int64 v30; // [rsp+30h] [rbp-D0h]
  __int64 v31; // [rsp+38h] [rbp-C8h]
  __int64 v32; // [rsp+40h] [rbp-C0h]
  __int64 v33; // [rsp+48h] [rbp-B8h]
  __int64 v34; // [rsp+50h] [rbp-B0h]
  __int64 v35; // [rsp+58h] [rbp-A8h]
  __int64 v36; // [rsp+60h] [rbp-A0h] BYREF
  int v37; // [rsp+68h] [rbp-98h] BYREF
  int v38; // [rsp+6Ch] [rbp-94h] BYREF
  int v39; // [rsp+70h] [rbp-90h] BYREF
  int v40; // [rsp+74h] [rbp-8Ch] BYREF
  __int64 v41; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v42; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v43[4]; // [rsp+84h] [rbp-7Ch] BYREF
  int v44; // [rsp+88h] [rbp-78h] BYREF
  _DWORD v45[3]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v46[16]; // [rsp+9Ch] [rbp-64h] BYREF
  _BYTE v47[20]; // [rsp+ACh] [rbp-54h] BYREF
  int v48; // [rsp+C0h] [rbp-40h] BYREF
  __int16 v49; // [rsp+C4h] [rbp-3Ch] BYREF
  _BYTE v50[84]; // [rsp+104h] [rbp+4h] BYREF
  _BYTE v51[2]; // [rsp+158h] [rbp+58h] BYREF
  __int16 v52; // [rsp+15Ah] [rbp+5Ah]
  int v53; // [rsp+168h] [rbp+68h]
  int v54; // [rsp+170h] [rbp+70h] BYREF
  __int16 v55; // [rsp+174h] [rbp+74h]
  _WORD v56[128]; // [rsp+21Ch] [rbp+11Ch] BYREF
  char v57; // [rsp+31Ch] [rbp+21Ch]
  _BYTE v58[256]; // [rsp+320h] [rbp+220h] BYREF
  _BYTE v59[256]; // [rsp+420h] [rbp+320h] BYREF
  _BYTE v60[512]; // [rsp+520h] [rbp+420h] BYREF
  __int64 v61; // [rsp+720h] [rbp+620h]

  v36 = 0;
  if ( (unsigned int)__imp_KERNEL32.dll!GetDynamicTimeZoneInformation(a1: a4, a2: a3, a3, a4: &v54) == -1 )
    goto LABEL_43;
  if ( v56[0] != 0 )
  {
    if ( v57 == 0 )
    {
      __imp_api-ms-win-crt-convert-l1-1-0.dll!wcstombs(a1: v5, a2: v6, a3: v56, a4: v5, a5: 256);
      return sub_132C8DE0(a1: v5, a2: v6, a3: v4, a4: (unsigned __int64)&v24 ^ v61, a5: v7, a6: v8);
    }
    v9 = v54;
    goto LABEL_5;
  }
  if ( v55 == 0 )
  {
    v28 = &v36;
    if ( (unsigned int)__imp_ADVAPI32.dll!RegOpenKeyExA(a1: v5, a2: v6, a3: 533456, a4: -2147483646, a5: 0, a6: 131097) == 0 )
    {
      v29 = &v37;
      v37 = 4;
      v28 = (__int64 *)&v38;
      if ( (unsigned int)__imp_ADVAPI32.dll!RegQueryValueExA(a1: v5, a2: v6, a3: 533512, a4: v36, a5: 0, a6: v43) == 0 )
      {
        if ( v38 == 1 )
        {
          sub_132B7F74(a1: v5, a2: v6, a3: v5, a4: v54);
          goto LABEL_44;
        }
        v29 = &v37;
        v28 = (__int64 *)v5;
        v37 = 256;
        v10 = __imp_ADVAPI32.dll!RegQueryValueExA(a1: v5, a2: v6, a3: 533544, a4: v36, a5: 0, a6: v43);
LABEL_13:
        if ( v10 == 0 )
          goto LABEL_44;
      }
    }
LABEL_43:
    if ( v36 == 0 )
      return sub_132C8DE0(a1: v5, a2: v6, a3: v4, a4: (unsigned __int64)&v24 ^ v61, a5: v7, a6: v8);
LABEL_44:
    __imp_ADVAPI32.dll!RegCloseKey(a1: v5, a2: v6, a3: v4, a4: v36);
    return sub_132C8DE0(a1: v5, a2: v6, a3: v4, a4: (unsigned __int64)&v24 ^ v61, a5: v7, a6: v8);
  }
  v41 = 0;
  v11 = &v49;
  if ( (unsigned int)__imp_KERNEL32.dll!GetTimeZoneInformation(a1: v5, a2: v6, a3: v4, a4: &v48) == -1 )
    goto LABEL_43;
  v28 = &v36;
  if ( (unsigned int)__imp_ADVAPI32.dll!RegOpenKeyExA(a1: v5, a2: v6, a3: 533456, a4: -2147483646, a5: 0, a6: 131097) == 0 )
  {
    v29 = &v37;
    v37 = 4;
    v28 = (__int64 *)&v38;
    if ( (unsigned int)__imp_ADVAPI32.dll!RegQueryValueExA(a1: v12, a2: v13, a3: 533512, a4: v36, a5: 0, a6: &v40) == 0
      && v38 == 1
      && v52 != 0 )
    {
      __imp_ADVAPI32.dll!RegCloseKey(a1: v5, a2: v6, a3: v4, a4: v36);
      v9 = v48;
LABEL_5:
      sub_132B7F74(a1: v5, a2: v6, a3: v5, a4: v9);
      return sub_132C8DE0(a1: v5, a2: v6, a3: v4, a4: (unsigned __int64)&v24 ^ v61, a5: v7, a6: v8);
    }
    if ( v49 == 0 )
    {
      v37 = 512;
      if ( (unsigned int)sub_132B8174(
                           a1: v5,
                           a2: v6,
                           a3: 0,
                           a4: v36,
                           a5: &v40,
                           a6: v60,
                           a7: v24,
                           a8: v25,
                           a9: v26,
                           a10: v27,
                           a11: &v37) != 0 )
        goto LABEL_43;
      v11 = (__int16 *)v60;
    }
    __imp_ADVAPI32.dll!RegCloseKey(a1: v5, a2: v6, a3: v4, a4: v36);
  }
  v28 = &v36;
  if ( (unsigned int)__imp_ADVAPI32.dll!RegOpenKeyExA(a1: v12, a2: v13, a3: 533560, a4: -2147483646, a5: 0, a6: 131097) == 0
    || (v28 = &v36, (unsigned int)__imp_ADVAPI32.dll!RegOpenKeyExA(a1: v5, a2: v6, a3: 533616, a4: -2147483646, a5: 0, a6: 131097) == 0) )
  {
    v35 = 0;
    v34 = 0;
    v33 = 0;
    v32 = 0;
    v31 = 0;
    v30 = 0;
    v29 = nullptr;
    v28 = (__int64 *)&v42;
    if ( (unsigned int)__imp_ADVAPI32.dll!RegQueryInfoKeyA(a1: v5, a2: v6, a3: 0, a4: v36, a5: 0, a6: 0) == 0 )
    {
      v6 = 0;
      if ( v42 == 0 )
        goto LABEL_44;
      while ( 1 )
      {
        v31 = 0;
        v30 = 0;
        v29 = nullptr;
        v28 = nullptr;
        v39 = 256;
        if ( (unsigned int)__imp_ADVAPI32.dll!RegEnumKeyExA(a1: v5, a2: v6, a3: (unsigned int)v6, a4: v36, a5: v58, a6: &v39) != 0 )
          break;
        v28 = &v41;
        if ( (unsigned int)__imp_ADVAPI32.dll!RegOpenKeyExA(a1: v5, a2: v6, a3: v58, a4: v36, a5: 0, a6: 131097) != 0 )
          break;
        v39 = 256;
        if ( (unsigned int)sub_132B8174(
                             a1: v5,
                             a2: v6,
                             a3: 2,
                             a4: v41,
                             a5: &v40,
                             a6: v59,
                             a7: v24,
                             a8: v25,
                             a9: v26,
                             a10: v27,
                             a11: &v39) != 0 )
        {
          __imp_api-ms-win-crt-string-l1-1-0.dll!wcscmp(a1: v15, a2: v16, a3: v14, a4: v41);
          v28 = &v41;
          v10 = __imp_ADVAPI32.dll!RegQueryValueExA(a1: v21, a2: v22, a3: v11, a4: v36, a5: 0, a6: 131097);
          goto LABEL_13;
        }
        if ( (unsigned int)__imp_ADVAPI32.dll!RegCloseKey(a1: v15, a2: v16, a3: v11, a4: v59) == 0 )
        {
          v29 = &v44;
          v44 = 44;
          v28 = (__int64 *)v45;
          if ( (unsigned int)__imp_ADVAPI32.dll!RegCloseKey(a1: v18, a2: v19, a3: 533672, a4: v41, a5: 0, a6: &v40) != 0
            || v48 == v45[0]
            && (unsigned int)sub_1932CA185(a1: v18, a2: v19, a3: v46, a4: v50, a5: 16) == 0
            && (v53 == 0 || v53 == v45[2]
                         && (unsigned int)sub_1932CA185(a1: v18, a2: v19, a3: v47, a4: v51, a5: 16) == 0) )
          {
            sub_1932CA27B(a1: v18, a2: v19, a3: v58, a4: v18);
            goto LABEL_44;
          }
        }
        __imp_ADVAPI32.dll!RegOpenKeyExW(a1: v18, a2: v19, a3: v17, a4: v41);
        v6 = (unsigned int)(v20 + 1);
        if ( (unsigned int)v6 >= v42 )
          goto LABEL_44;
      }
    }
    goto LABEL_43;
  }
  return sub_132C8DE0(a1: v5, a2: v6, a3: v4, a4: (unsigned __int64)&v24 ^ v61, a5: v7, a6: v8);
}
