// sub_18159DB80
// rva 0x0159db80  size 719  section .text  group text
// window base 0x18159db80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18159DB80(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        __int64 a12)
{
  __int64 v12; // rbx
  __int64 v13; // r13
  _DWORD *v14; // r14
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rbp
  int v23; // edx
  __int64 v24; // rdi
  int v25; // eax
  __int64 v26; // rsi
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 result; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // r8
  __int64 v36; // r9
  int v37; // [rsp+0h] [rbp-68h] BYREF
  int v38; // [rsp+18h] [rbp-50h]
  int v39; // [rsp+1Ch] [rbp-4Ch]
  _DWORD *v40; // [rsp+20h] [rbp-48h]
  int v41; // [rsp+2Ch] [rbp-3Ch]
  _DWORD *v42; // [rsp+30h] [rbp-38h]
  _DWORD *v43; // [rsp+38h] [rbp-30h]
  _DWORD *v44; // [rsp+40h] [rbp-28h]
  void (__fastcall *v45)(__int64, __int64, _DWORD *, _QWORD, _DWORD *, __int64); // [rsp+48h] [rbp-20h]
  __int64 (__fastcall *v46)(__int64, _DWORD *, _DWORD *); // [rsp+50h] [rbp-18h]
  int v47; // [rsp+58h] [rbp-10h]
  int v48; // [rsp+5Ch] [rbp-Ch]
  __int64 v49; // [rsp+60h] [rbp-8h]

  if ( (unsigned __int64)&v37 <= *(_QWORD *)(v15 + 8) )
  {
    MEMORY[0x181EB83C0]();
    goto LABEL_17;
  }
  v16 = (unsigned int)v14[94153334];
  v44 = &v14[2 * v16];
  LODWORD(v12) = (_DWORD)v14 + 376612120;
  v43 = v14 + 94153332;
  if ( (int)v14[94153336] < 0 )
    return sub_18159DE07(a1, a2, a3, a4: (int)v14 + 8 * (int)v16, a5, a6, a7, a8, a9, a10, a11, a12);
  if ( (_DWORD)v16 == 0 )
  {
LABEL_20:
    MEMORY[0x18276EFE0]();
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
    return sub_18159DE60(a1: v33, a2: v34, a3: v31, a4: v32, a5: v35, a6: v36);
  }
  v41 = v16;
  v14[94153031] = 0;
  v42 = v14 + 94153030;
  MEMORY[0x1820841E0](a1, a2, a3: v14 + 94153030);
  v49 = sub_1815A85E0(a1: v18, a2: v19, a3: v14 + 94153340, a4: v17, a5: 0);
  while ( (int)v14[94153336] < 19 )
  {
    v12 = (unsigned int)v14[94153336];
    if ( (unsigned int)v12 >= 0x13 )
      goto LABEL_18;
    v22 = (unsigned int)v14[v12 + 94153391];
    if ( v14[94153337] == 0 )
    {
      v14[94153337] = v14[v12 + 94153413] - 1;
      __faststorefence();
    }
    v23 = v14[94153337] + 1;
    v14[94153337] = v23;
    __faststorefence();
    v40 = &v14[2 * v22];
    if ( (_DWORD)v22 == 0 )
      goto LABEL_19;
    v48 = v23;
    v47 = v12;
    v24 = v14[2 * v22] >> 3;
    v46 = (__int64 (__fastcall *)(__int64, _DWORD *, _DWORD *))(v13 + *(_QWORD *)&v14[2 * v24 + 28]);
    v39 = v22;
    v38 = v24;
    v25 = v46(a1: v24, a2: &v14[2 * v22], a3: &v14[2 * v22]);
    if ( v48 <= v25 )
    {
      v26 = (unsigned int)v14[94153337];
      v45 = (void (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, _DWORD *, __int64))(v13
                                                                                       + *(_QWORD *)&v14[2 * v38 + 30]);
      v45(a1: 3, a2: v26, a3: v40, a4: v45, a5: v44, a6: v49);
    }
    *((_QWORD *)v14 + 47076668) = (unsigned int)(v14[94153336] + 1);
    __faststorefence();
  }
  if ( v41 == 0 )
  {
LABEL_17:
    MEMORY[0x18276EFE0]();
LABEL_18:
    v47 = v12;
    MEMORY[0x18276F0E0]();
LABEL_19:
    MEMORY[0x18276EFE0]();
    goto LABEL_20;
  }
  MEMORY[0x182082680](a1: v20, a2: v21, a3: v42);
  result = sub_18159C580(a1: v28, a2: v29, a3: (__int64)v43, a4: v27);
  if ( *(int *)(v15 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
