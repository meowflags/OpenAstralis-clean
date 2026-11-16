// sub_132AD518
// rva 0x132ad518  size 731  section .text  group text
// window base 0x1932ad518: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132AD518(__int64 a1, __int64 a2, int a3, __int64 a4, int a5)
{
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rsi
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // rsi
  int v18; // r9d
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int v24; // eax
  __int64 v25; // rdx
  __int64 k; // rsi
  int i; // r14d
  unsigned int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // rdi
  __int64 j; // rdi
  __int64 v35; // r8
  int v36; // edi
  int v37; // esi
  int v38; // r9d
  __int64 v39; // rcx
  __int64 v40; // rdx
  int v41; // r8d
  int v42; // r9d
  __int64 v43; // r8
  int v44; // r8d
  int v45; // r9d
  __int64 v47; // [rsp+0h] [rbp-100h] BYREF
  __int64 v48; // [rsp+8h] [rbp-F8h]
  __int64 v49; // [rsp+10h] [rbp-F0h]
  __int64 v50; // [rsp+18h] [rbp-E8h]
  int *v51; // [rsp+20h] [rbp-E0h]
  int *v52; // [rsp+28h] [rbp-D8h]
  __int64 v53; // [rsp+30h] [rbp-D0h]
  __int64 v54; // [rsp+38h] [rbp-C8h]
  unsigned int v55; // [rsp+40h] [rbp-C0h] BYREF
  int v56; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v57; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v58[16]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v59[1024]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v60; // [rsp+460h] [rbp+360h]

  v51 = (int *)&v57;
  if ( (unsigned int)__imp_ADVAPI32.dll!RegOpenKeyExA(a1, a2: a4, a3: 538832, a4: -2147483646, a5: 0, a6: 131097) == 0 )
  {
    v52 = &v56;
    v56 = 1024;
    v51 = (int *)v59;
    if ( (unsigned int)__imp_ADVAPI32.dll!RegQueryValueExA(a1: v8, a2: v9, a3: 538888, a4: v57, a5: 0, a6: v58) == 0
      && sub_1932CA1FD(a1: v11, a2: v12, a3: v10, a4: v59) != 0 )
    {
      sub_132AD7F4(a1: v11, a2: v12, a3: (unsigned int)v59, a4: a3, a5: v13, a6: v14, a7: v47, a8: v48, a9: v49);
    }
    __imp_ADVAPI32.dll!RegCloseKey(a1: v11, a2: v12, a3: v10, a4: v57);
  }
  v15 = __imp_api-ms-win-crt-heap-l1-1-0.dll!malloc(a1: 15360, a2: v9, a3: v7, a4: 15360);
  if ( v15 != 0 )
  {
    v55 = v16;
    v51 = (int *)&v55;
    v24 = __imp_IPHLPAPI.DLL!GetAdaptersAddresses(a1: v16, a2: v17, a3: 39, a4: 0, a5: 0, a6: v15);
    for ( i = 0; ; ++i )
    {
      v33 = v24;
      if ( v24 != 111 )
        break;
      if ( i >= 3 )
        goto LABEL_16;
      v28 = v55;
      if ( v55 < 0xFFFFC3FF )
      {
        v28 = v55 + 15360;
        v55 += 15360;
      }
      v29 = __imp_api-ms-win-crt-heap-l1-1-0.dll!realloc(a1: v33, a2: k, a3: v28, a4: v15);
      if ( v29 == 0 )
      {
        __imp_IPHLPAPI.DLL!GetAdaptersAddresses(a1: v31, a2: v32, a3: v30, a4: v15);
        goto LABEL_7;
      }
      v51 = (int *)&v55;
      v15 = v29;
      v24 = __imp_api-ms-win-crt-heap-l1-1-0.dll!free(a1: v31, a2: v32, a3: 39, a4: 0, a5: 0, a6: v29);
    }
    if ( v24 == 0 )
    {
      for ( j = v15; j != 0; j = *(_QWORD *)(j + 8) )
      {
        if ( *(_DWORD *)(j + 104) == 1 )
        {
          for ( k = *(_QWORD *)(j + 48); k != 0; k = *(_QWORD *)(k + 8) )
          {
            v39 = *(_QWORD *)(k + 16);
            if ( *(_WORD *)v39 != 23 || *(_DWORD *)(v39 + 24) == 0 )
            {
              v56 = 1024;
              v40 = *(unsigned int *)(k + 24);
              v51 = &v56;
              if ( (unsigned int)__imp_KERNEL32.dll!SetLastError(a1: j, a2: k, a3: v40, a4: v39, a5: 0, a6: v59) == 0 )
                sub_132AD7F4(a1: j, a2: k, a3: (unsigned int)v59, a4: a5, a5: v41, a6: v42, a7: v47, a8: v48, a9: v49);
            }
          }
          v43 = *(_QWORD *)(j + 56);
          if ( v43 != 0 )
          {
            v54 = 0;
            v53 = 0;
            LODWORD(v52) = 1024;
            v51 = (int *)v59;
            if ( (unsigned int)__imp_api-ms-win-crt-heap-l1-1-0.dll!free(a1: j, a2: k, a3: 0, a4: 65001, a5: v43, a6: 0xFFFFFFFFLL) != 0 )
              sub_132AD7F4(a1: j, a2: k, a3: (unsigned int)v59, a4: a3, a5: v44, a6: v45, a7: v47, a8: v48, a9: v49);
          }
        }
      }
      goto LABEL_36;
    }
LABEL_16:
    __imp_WS2_32.dll!WSAAddressToStringA(a1: v24, a2: k, a3: v25, a4: v15);
    if ( (_DWORD)j == 8 )
    {
      JNU_ThrowOutOfMemoryError(a1: j, a2: k, a3: 538688, a4: k);
      return sub_132C8DE0(a1: v20, a2: v21, a3: v19, a4: (unsigned __int64)&v47 ^ v60, a5: v22, a6: v23);
    }
    if ( (_DWORD)j == 87 )
    {
      JNU_ThrowInternalError(a1: j, a2: k, a3: 538608, a4: k, a5: v35);
      return sub_132C8DE0(a1: v20, a2: v21, a3: v19, a4: (unsigned __int64)&v47 ^ v60, a5: v22, a6: v23);
    }
    if ( (_DWORD)j != 232 )
    {
      __imp_KERNEL32.dll!WideCharToMultiByte(a1: j, a2: k, a3: v25, a4: (unsigned int)j);
      JNU_ThrowByNameWithMessageAndLastError(a1: v36, a2: v37, a3: 534024, a4: v37, a5: 538768, a6: v38, a7: v47, a8: v48, a9: v49, a10: v50);
      return sub_132C8DE0(a1: v20, a2: v21, a3: v19, a4: (unsigned __int64)&v47 ^ v60, a5: v22, a6: v23);
    }
    v15 = 0;
LABEL_36:
    __imp_api-ms-win-crt-heap-l1-1-0.dll!free(a1: j, a2: k, a3: v25, a4: v15);
  }
  else
  {
LABEL_7:
    JNU_ThrowByName(a1: v16, a2: v17, a3: 538568, a4: v17, a5: 538536, a6: v18);
  }
  return sub_132C8DE0(a1: v20, a2: v21, a3: v19, a4: (unsigned __int64)&v47 ^ v60, a5: v22, a6: v23);
}
