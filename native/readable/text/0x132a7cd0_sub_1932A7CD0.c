// sub_132A7CD0
// rva 0x132a7cd0  size 260  section .text  group text
// window base 0x1932a7cd0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132A7CD0(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  unsigned int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // rsi
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdi
  unsigned int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // rsi
  int v23; // ebx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rsi
  _QWORD v29[5]; // [rsp+0h] [rbp-88h] BYREF
  int v30; // [rsp+28h] [rbp-60h]
  int v31; // [rsp+30h] [rbp-58h]
  int v32; // [rsp+38h] [rbp-50h]
  int v33; // [rsp+40h] [rbp-48h]
  __int64 v34; // [rsp+48h] [rbp-40h]
  int v35; // [rsp+50h] [rbp-38h]
  __int64 v36; // [rsp+60h] [rbp-28h] BYREF
  _QWORD v37[4]; // [rsp+68h] [rbp-20h] BYREF

  v35 = 0;
  v34 = 0;
  v33 = 0;
  v32 = 1;
  v31 = 3;
  v30 = 0;
  v29[4] = 0;
  v5 = __imp_KERNEL32.dll!CreateIoCompletionPort(a1: a4, a2, a3: 0x100000, a4: &v36, a5: 3368920, a6: v37);
  if ( v5 != 0 )
  {
    v9 = __imp_KERNEL32.dll!SetFileCompletionNotificationModes(a1: v7, a2: v8, a3: v6, a4: v5);
    sub_132A85F8(a1: v11, a2: v12, a3: v10, a4: v9);
  }
  else if ( __imp_KERNEL32.dll!CloseHandle(a1: v7, a2: v8, a3: v7, a4: v36, a5: 0, a6: 0) != 0
         && (LOBYTE(v13) = 2, (unsigned int)__imp_KERNEL32.dll!GetLastError(a1: v14, a2: v15, a3: v13, a4: v36) != 0) )
  {
    *a3 = v36;
  }
  else
  {
    __imp_api-ms-win-crt-runtime-l1-1-0.dll!_errno(a1: v14, a2: v15, a3: v13, a4: v36);
    v19 = __imp_KERNEL32.dll!AcquireSRWLockExclusive(a1: v18);
    v23 = sub_1932A8158(a1: v21, a2: v22, a3: v20, a4: v19);
    *(_DWORD *)__imp_KERNEL32.dll!ReleaseSRWLockExclusive(a1: v26, a2: v27, a3: v24, a4: v25) = v23;
  }
  return sub_132C8DE0(a1: v14, a2: v15, a3: v13, a4: (unsigned __int64)v29 ^ v37[2], a5: v16, a6: v17);
}
