// sub_132AAC54
// rva 0x132aac54  size 611  section .text  group text
// window base 0x1932aac54: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132AAC54(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rdi
  __int64 v28; // rsi
  int v29; // eax
  unsigned int v30; // eax
  bool v31; // zf
  unsigned int v32; // eax
  __int64 v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // rdi
  __int64 v37; // rsi
  __int64 v38; // rdx
  __int64 v39; // rdi
  __int64 v40; // rsi
  __int64 v42; // [rsp+0h] [rbp-C8h] BYREF
  __int64 *v43; // [rsp+20h] [rbp-A8h]
  __int64 v44; // [rsp+28h] [rbp-A0h]
  _QWORD *v45; // [rsp+30h] [rbp-98h]
  int v46; // [rsp+38h] [rbp-90h]
  __int64 v47; // [rsp+40h] [rbp-88h]
  __int64 v48; // [rsp+48h] [rbp-80h]
  int v49; // [rsp+50h] [rbp-78h]
  int v50; // [rsp+58h] [rbp-70h]
  __int64 v51; // [rsp+60h] [rbp-68h] BYREF
  _QWORD v52[4]; // [rsp+68h] [rbp-60h] BYREF
  __int64 v53; // [rsp+88h] [rbp-40h]

  memset(v52, 0, sizeof(v52));
  v16 = __imp_api-ms-win-crt-heap-l1-1-0.dll!malloc(a1: a5, a2, a3, a4: 80);
  if ( v16 != 0 )
  {
    v24 = *(unsigned int *)(v15 + 4);
    if ( a6 != 0 )
    {
      if ( a11 >= 1000 )
        JUMPOUT(0x326504D0ELL);
      v50 = 1000;
      v49 = 80;
      v48 = v16;
      v47 = 0;
      LOWORD(v46) = 32;
      v45 = v52;
      v29 = *(_DWORD *)(a6 + 4);
      LODWORD(v44) = v24;
      LODWORD(v43) = v29;
      v25 = __imp_IPHLPAPI.DLL!IcmpCloseHandle(a1: (unsigned int)a11, a2: v16, a3: 0, a4: a3, a5: 0, a6: 0);
    }
    else
    {
      if ( a11 >= 1000 )
        JUMPOUT(0x326504CE8LL);
      v46 = 1000;
      LODWORD(v45) = 80;
      v44 = v16;
      v43 = nullptr;
      v25 = __imp_IPHLPAPI.DLL!IcmpSendEcho(a1: (unsigned int)a11, a2: v16, a3: v24, a4: a3, a5: v52, a6: 32);
    }
    if ( v25 != 0 )
    {
      if ( *(_DWORD *)(v28 + 4) == 0 && *(_DWORD *)(v28 + 8) > (int)v27 )
        JUMPOUT(0x326504E83LL);
      goto LABEL_34;
    }
    v51 = 0;
    v30 = __imp_IPHLPAPI.DLL!IcmpSendEcho2Ex(a1: v27, a2: v28);
    v27 = v30;
    if ( v30 > 0x4D3 )
    {
      if ( v30 != 1241 && v30 != 1256 && v30 != 10046 && v30 != 10050 && v30 != 10051 && v30 != 10065 )
      {
        v31 = v30 == 11010;
LABEL_25:
        if ( !v31 )
        {
          v45 = nullptr;
          LODWORD(v44) = 0;
          v43 = &v51;
          v32 = __imp_WS2_32.dll!#111(a1: v30, a2: v28, a3: 0, a4: 4352, a5: v30, a6: 1024);
          if ( v32 > 3 )
          {
            switch ( *(_BYTE *)(v32 - 1 + v51) )
            {
              case 0xA:
                JUMPOUT(0x326504E3ALL);
              case 0xD:
                JUMPOUT(0x326504E45LL);
              case 0x2E:
                JUMPOUT(0x326504E50LL);
              default:
                break;
            }
            *(_BYTE *)(v32 + v51) = 0;
          }
          NET_ThrowNew(a1: v33, a2: v34, a3: (unsigned int)v33, a4, a5: v51);
          __imp_KERNEL32.dll!FormatMessageA(a1: v36, a2: v37, a3: v35, a4: v51);
        }
      }
    }
    else if ( v30 != 1235 && v30 != 1210 && v30 != 1214 && v30 != 1222 && v30 != 1231 && v30 != 1232 && v30 != 1233 )
    {
      v31 = v30 == 1234;
      goto LABEL_25;
    }
LABEL_34:
    __imp_KERNEL32.dll!LocalFree(a1: v27, a2: v28, a3: v26, a4: v28);
    __imp_api-ms-win-crt-heap-l1-1-0.dll!free(a1: v39, a2: v40, a3: v38, a4: a3);
    return sub_132C8DE0(a1: v20, a2: v21, a3: v19, a4: (unsigned __int64)&v42 ^ v53, a5: v22, a6: v23);
  }
  __imp_IPHLPAPI.DLL!IcmpCloseHandle(a1: v15, a2: 0, a3: v14, a4: a3);
  NET_ThrowNew(a1: v17, a2: v18, a3: 0xFFFFFFFFLL, a4, a5: 537496);
  return sub_132C8DE0(a1: v20, a2: v21, a3: v19, a4: (unsigned __int64)&v42 ^ v53, a5: v22, a6: v23);
}
