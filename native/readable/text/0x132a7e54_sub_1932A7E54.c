// sub_132A7E54
// rva 0x132a7e54  size 302  section .text  group text
// window base 0x1932a7e54: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132A7E54(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v9; // rdx
  __int64 v10; // rsi
  int v11; // r8d
  int v12; // r9d
  volatile signed __int32 *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rsi
  int v17; // edx
  int v18; // edi
  int v19; // esi
  int v20; // r8d
  int v21; // r9d
  __int64 *v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rdi
  __int64 v28; // rsi
  unsigned int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rdi
  __int64 v32; // rsi
  int v33; // ebx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdi
  __int64 v37; // rsi
  int v38; // edx
  __int64 v39; // rdi
  __int64 v40; // rsi
  int v41; // r8d
  int v42; // r9d
  __int64 v43; // [rsp+0h] [rbp-28h]
  __int64 v44; // [rsp+8h] [rbp-20h]

  if ( (int)sub_132A8620() < 0 )
    return 0xFFFFFFFFLL;
  __imp_KERNEL32.dll!AcquireSRWLockExclusive(a1: v6, a2: v7, a3: v5, a4: 3372224);
  v13 = (volatile signed __int32 *)__imp_KERNEL32.dll!ReleaseSRWLockExclusive;
  while ( v13 != nullptr )
  {
    if ( a4 >= *((_QWORD *)v13 + 3) )
    {
      if ( a4 <= *((_QWORD *)v13 + 3) )
      {
        sub_132A9668(a1: (_DWORD)v13, a2: v10, a3: (_DWORD)v13, a4: 3372216, a5: v11, a6: v12);
        __sync_add_and_fetch(v13 + 10, 1);
        break;
      }
      v13 = *((volatile signed __int32 **)v13 + 1);
    }
    else
    {
      v13 = *(volatile signed __int32 **)v13;
    }
  }
  __imp_KERNEL32.dll!EnterCriticalSection(a1: v13, a2: v10, a3: v9, a4: 3372224);
  if ( v15 == 0 )
  {
    sub_132A85F8(a1: 0, a2: v16, a3: v14, a4: 87);
    sub_132A85AC(a1: v18, a2: v19, a3: v17, a4, a5: v20, a6: v21);
    return 0xFFFFFFFFLL;
  }
  __imp_KERNEL32.dll!CloseHandle(a1: v15, a2: v15 - 64, a3: v14, a4: v15 - 64 + 112);
  v23 = *v22;
  *v22 = 0;
  if ( (unsigned int)__imp_KERNEL32.dll!GetLastError(a1: v25, a2: v22, a3: v24, a4: v23) == 0 )
  {
    v29 = __imp_api-ms-win-crt-runtime-l1-1-0.dll!_errno(a1: v27);
    v33 = sub_1932A8158(a1: v31, a2: v32, a3: v30, a4: v29);
    *(_DWORD *)__imp_KERNEL32.dll!LeaveCriticalSection(a1: v36, a2: v37, a3: v34, a4: v35) = v33;
  }
  __imp_api-ms-win-crt-runtime-l1-1-0.dll!abort(a1: v27, a2: v28, a3: v26, a4: v28 + 112);
  if ( ((__sync_fetch_and_add((volatile signed __int32 *)(v39 + 40), 0xFFFFFFFu) + 0xFFFFFFF) & 0xFFFFFFF) != 0
    && (unsigned int)__imp_api-ms-win-crt-runtime-l1-1-0.dll!abort(a1: v39, a2: v40, a3: v39 + 40, a4: MEMORY[0x3374d8]/* 0x3374d8 */, a5: 0, a6: 0) != 0 )
  {
    MEMORY[0x79b28]/* 0x79b28 */();
    __builtin_debugtrap();
  }
  __atomic_exchange_n((volatile __int32 *)(v39 + 40), 806218448, __ATOMIC_SEQ_CST);
  return sub_132A8D60(a1: v39, a2: v40, a3: v38, a4: v40, a5: v41, a6: v42, a7: v43, a8: v44);
}
