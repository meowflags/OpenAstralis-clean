// sub_1815AE1E0
// rva 0x015ae1e0  size 390  section .text  group text
// window base 0x1815ae1e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815AE1E0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        int a7,
        int a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rsi
  _DWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rcx
  unsigned int v19; // r9d
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rdi
  int v23; // eax
  int v24; // ebx
  _DWORD *v25; // rbp
  char *v26; // r10
  __int64 result; // rax
  __int64 v28; // rdi
  __int64 v29; // rsi
  int v30; // edx
  int v31; // ecx
  int v32; // edi
  int v33; // esi
  int v34; // r8d
  int v35; // r9d
  int v36; // [rsp+0h] [rbp-58h] BYREF
  __int64 v37; // [rsp+20h] [rbp-38h]
  __int64 v38; // [rsp+28h] [rbp-30h]
  char *v39; // [rsp+30h] [rbp-28h]
  int v40; // [rsp+3Ch] [rbp-1Ch]
  _DWORD *v41; // [rsp+40h] [rbp-18h]
  unsigned int v42; // [rsp+4Ch] [rbp-Ch]
  __int64 v43; // [rsp+50h] [rbp-8h]

  v43 = a5;
  if ( (unsigned __int64)&v36 <= *(_QWORD *)(v11 + 8) )
  {
    v42 = a6;
    MEMORY[0x181EB83C0]();
LABEL_9:
    MEMORY[0x18276EAE0]();
LABEL_10:
    MEMORY[0x18276EAE0](a1: v22, a2: v17, a3: v37, a4: v21, a5: v43, a6: v42);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1815AE380(a1: v32, a2: v33, a3: v30, a4: v31, a5: v34, a6: v35, a7, a8, a9, a10);
  }
  v38 = v10 + 376612880;
  v42 = a6;
  v41 = *(_DWORD **)(a5 + 176);
  v12 = *(unsigned int *)sub_1815A85E0(a1, a2, a3: v41);
  if ( (_DWORD)v12 != 0 && *(_DWORD *)(v10 + 8 * v12) >> 3 != 4260335 )
    goto LABEL_9;
  v15 = *(_DWORD **)(v43 + 176);
  v37 = v10 + 8 * v12;
  v41 = v15;
  v16 = *(unsigned int *)sub_1815A85E0(a1: v13, a2: v14, a3: v15);
  if ( (_DWORD)v16 != 0 )
  {
    v18 = *(_DWORD *)(v10 + 8 * v16) >> 3;
    v19 = *(_DWORD *)(v10 + 8 * v18 + 44);
    v20 = v10 + 8LL * *(unsigned int *)(v10 + 8 * v18 + 20);
    v21 = HIBYTE(v19);
    v22 = v19 & (0x202u >> SHIBYTE(v19));
    if ( (unsigned __int16)*(_DWORD *)(v20 + 4 * v22 + 12) != 514 )
      goto LABEL_10;
  }
  v23 = v38;
  v24 = *(_DWORD *)(v43 + 220);
  v25 = *(_DWORD **)(v43 + 80);
  v26 = (char *)v25 + *(_QWORD *)(v43 + 72);
  v38 = v10 + 8 * v16;
  v40 = v24;
  v41 = v25;
  v39 = v26;
  result = sub_1815AE380(
             a1: v37,
             a2: (_DWORD)v25,
             a3: v23,
             a4: (_DWORD)v26,
             a5: v43,
             a6: v24,
             a7: v36,
             a8: (int)v10 + 376614768,
             a9: 0,
             a10: 0);
  if ( *(int *)(v11 + 16) <= 0 )
    return MEMORY[0x18277F280](a1: v28, a2: v29, a3: v38);
  return result;
}
