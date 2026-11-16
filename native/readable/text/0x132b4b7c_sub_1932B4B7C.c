// sub_132B4B7C
// rva 0x132b4b7c  size 284  section .text  group text
// window base 0x1932b4b7c: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132B4B7C(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 *v10; // rsi
  __int64 v11; // rbx
  unsigned int v12; // eax
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rdi
  __int64 *v23; // rsi
  __int64 v24; // rbx
  unsigned int v25; // eax
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v29; // [rsp+0h] [rbp-868h] BYREF
  _DWORD v30[4]; // [rsp+20h] [rbp-848h] BYREF
  _BYTE v31[2048]; // [rsp+30h] [rbp-838h] BYREF
  __int64 v32; // [rsp+830h] [rbp-38h]

  v30[0] = 1024;
  v7 = 0;
  if ( (unsigned int)__imp_KERNEL32.dll!QueryFullProcessImageNameW(a1, a2: a4, a3: 0, a4: a3, a5: v31, a6: v30) != 0 )
  {
    v11 = *v10;
    v12 = __imp_api-ms-win-crt-string-l1-1-0.dll!wcslen(a1: v9, a2: v10, a3: v8, a4: v31);
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, _BYTE *, __int64, _QWORD))(v11 + 1304))(
           a1: v13,
           a2: v14,
           a3: v31,
           a4: v14,
           a5: v12);
  }
  else
  {
    if ( (unsigned int)__imp_KERNEL32.dll!GetLastError(a1: v9) != 122 )
      return sub_132C8DE0(a1: v16, a2: v17, a3: v15, a4: (unsigned __int64)&v29 ^ v32, a5: v18, a6: v19);
    v30[0] = 0x8000;
    v20 = __imp_api-ms-win-crt-heap-l1-1-0.dll!malloc(a1: v16, a2: v17, a3: v15, a4: 0x10000);
    v16 = v20;
    if ( v20 == 0 )
      return sub_132C8DE0(a1: v16, a2: v17, a3: v15, a4: (unsigned __int64)&v29 ^ v32, a5: v18, a6: v19);
    if ( (unsigned int)__imp_KERNEL32.dll!QueryFullProcessImageNameW(a1: v20, a2: v17, a3: 0, a4: a3, a5: v20, a6: v30) != 0 )
    {
      v24 = *v23;
      v25 = __imp_api-ms-win-crt-string-l1-1-0.dll!wcslen(a1: v22, a2: v23, a3: v21, a4: v22);
      v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(v24 + 1304))(
             a1: v26,
             a2: v27,
             a3: v26,
             a4: v27,
             a5: v25);
    }
    __imp_api-ms-win-crt-heap-l1-1-0.dll!free(a1: v22, a2: v23, a3: v21, a4: v22);
  }
  if ( v7 != 0 )
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD, __int64))(*(_QWORD *)v17 + 832LL))(
      a1: v16,
      a2: v17,
      a3: a5,
      a4: v17,
      a5: MEMORY[0x337638]/* 0x337638 */,
      a6: v7);
  return sub_132C8DE0(a1: v16, a2: v17, a3: v15, a4: (unsigned __int64)&v29 ^ v32, a5: v18, a6: v19);
}
