// sub_132B4E24
// rva 0x132b4e24  size 447  section .text  group text
// window base 0x1932b4e24: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132B4E24(_DWORD a1, _DWORD a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdx
  __int64 *v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rsi
  int v16; // r9d
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rbx
  unsigned int v20; // eax
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 *v29; // rdi
  __int64 v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // rsi
  unsigned int v33; // eax
  __int64 v34; // rdi
  __int64 v35; // rsi
  __int64 v37; // [rsp+0h] [rbp-100h] BYREF
  unsigned int *v38; // [rsp+20h] [rbp-E0h]
  int *v39; // [rsp+28h] [rbp-D8h]
  char *v40; // [rsp+30h] [rbp-D0h]
  unsigned int v41; // [rsp+40h] [rbp-C0h] BYREF
  int v42; // [rsp+44h] [rbp-BCh] BYREF
  int v43; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v44; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v45; // [rsp+58h] [rbp-A8h] BYREF
  char v46; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v47[32]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v48[1024]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v49[512]; // [rsp+570h] [rbp+470h] BYREF
  __int64 v50; // [rsp+770h] [rbp+670h]

  v41 = 256;
  v42 = 512;
  v43 = 512;
  if ( (unsigned int)__imp_ADVAPI32.dll!OpenProcessToken(a1: a4, a2: a5, a3: 131080, a4: a3, a5: &v45) != 0 )
  {
    v38 = &v41;
    v10 = __imp_ADVAPI32.dll!GetTokenInformation(a1: v6, a2: v7, a3: 1, a4: v45, a5: v47, a6: v41);
    __imp_KERNEL32.dll!CloseHandle(a1: v12, a2: v13, a3: v11, a4: v45);
    if ( v10 != 0 )
    {
      v40 = &v46;
      v39 = &v42;
      v38 = (unsigned int *)v48;
      if ( (unsigned int)__imp_ADVAPI32.dll!LookupAccountSidW(a1: v14, a2: v15, a3: v47[0], a4: 0, a5: v49, a6: &v43) != 0 )
      {
        __imp_api-ms-win-crt-string-l1-1-0.dll!wcslen(a1: v17, a2: v18, a3: 544140, a4: v48);
        __imp_KERNEL32.dll!LocalFree(a1: v27, a2: v28, a3: v49, a4: v48);
        v30 = *v29;
        v33 = __imp_api-ms-win-crt-string-l1-1-0.dll!wcscat(a1: v29, a2: v32, a3: v31, a4: v48);
        v23 = (*(__int64 (__fastcall **)(__int64, __int64, _BYTE *, __int64, _QWORD))(v30 + 1304))(
                a1: v34,
                a2: v35,
                a3: v48,
                a4: v34,
                a5: v33);
      }
      else
      {
        if ( (unsigned int)sub_1932CA311(a1: v17, a2: v18, a3: &v44, a4: v47[0]) == 0 )
          return sub_132C8DE0(a1: v6, a2: v7, a3: v5, a4: (unsigned __int64)&v37 ^ v50, a5: v8, a6: v9);
        v19 = *v6;
        v20 = __imp_api-ms-win-crt-string-l1-1-0.dll!wcscat(a1: v6, a2: v7, a3: v5, a4: v44);
        v23 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(v19 + 1304))(
                a1: v21,
                a2: v22,
                a3: v44,
                a4: v21,
                a5: v20);
        __imp_api-ms-win-crt-string-l1-1-0.dll!wcslen(a1: v25, a2: v26, a3: v24, a4: v44);
      }
      if ( v23 != 0 )
        (*(void (__fastcall **)(__int64 *, __int64, __int64, __int64 *, _QWORD, __int64))(*v6 + 832))(
          a1: v6,
          a2: v7,
          a3: v7,
          a4: v6,
          a5: MEMORY[0x337660]/* 0x337660 */,
          a6: v23);
    }
    else
    {
      JNU_ThrowByNameWithLastError(a1: v14, a2: v15, a3: 544016, a4: v14, a5: 544120, a6: v16);
    }
  }
  return sub_132C8DE0(a1: v6, a2: v7, a3: v5, a4: (unsigned __int64)&v37 ^ v50, a5: v8, a6: v9);
}
