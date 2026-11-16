// sub_18159DF60
// rva 0x0159df60  size 528  section .text  group text
// window base 0x18159df60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18159DF60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  _DWORD *v5; // r14
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdx
  _DWORD *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 result; // rax
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rdi
  __int64 v35; // rsi
  __int64 v36; // rcx
  __int64 v37; // rsi
  __int64 v38; // [rsp+0h] [rbp-38h] BYREF
  int v39; // [rsp+14h] [rbp-24h]
  _DWORD *v40; // [rsp+18h] [rbp-20h]
  _DWORD *v41; // [rsp+20h] [rbp-18h]
  _DWORD *v42; // [rsp+28h] [rbp-10h]
  unsigned int v43; // [rsp+30h] [rbp-8h]
  unsigned int v44; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)&v38 <= *(_QWORD *)(v6 + 8) )
  {
    MEMORY[0x181EB83C0]();
    goto LABEL_22;
  }
  v42 = a5;
  v41 = v5 + 94153030;
  if ( a5 == v5 )
  {
    v40 = v5;
LABEL_5:
    MEMORY[0x182084840](a1, a2, a3: v5 + 94153030, a4: v5 + 90179226, a5: v5 + 90179226);
    if ( v42 != v5 )
    {
      v11 = *v42 >> 3;
      if ( SHIWORD(v5[2 * v11 + 15]) >= 2 && v5[2 * v5[2 * v11 + 4] + 4] == 27283 )
      {
        result = MEMORY[0x182083F80](a1: v9, a2: v10, a3: v41, a4: v8, a5: v42, a6: 2);
        goto LABEL_11;
      }
    }
    if ( v42 != v5 )
    {
      v12 = &v5[2 * v5[2 * (*v42 >> 3) + 3]];
      v39 = *v42 >> 3;
      MEMORY[0x182084840](a1: v9, a2: v10, a3: v41, a4: v12, a5: v12);
      if ( v5 + 8520670 == v40 )
      {
        v20 = MEMORY[0x182084840](a1: v14, a2: v15, a3: v41, a4: v13, a5: v5 + 93109216);
        v24 = MEMORY[0x182084880](a1: v22, a2: v23, a3: v20, a4: v21, a5: v42, a6: 60);
        result = MEMORY[0x182084840](a1: v26, a2: v27, a3: v24, a4: v25, a5: v5 + 93220502);
      }
      else
      {
        result = (unsigned int)v5[2 * v39 + 8];
        if ( (int)result < 0 )
        {
          v44 = v5[2 * v39 + 8];
          v43 = v42[2];
          v28 = MEMORY[0x182084840](a1: v14, a2: v15, a3: v41, a4: v13, a5: v5 + 93222234);
          v32 = MEMORY[0x182084560](a1: v30, a2: v31, a3: v28, a4: v29, a5: v43);
          MEMORY[0x182084840](a1: v34, a2: v35, a3: v32, a4: v33, a5: v5 + 93109238);
          result = sub_18159E180(a1: v44, a2: v37, a3: v41, a4: v36, a5: v42, a6: v43);
        }
      }
LABEL_11:
      if ( *(int *)(v6 + 16) > 0 )
        return result;
      return MEMORY[0x18277F280]();
    }
LABEL_22:
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
    return ((__int64 (*)(void))sub_18159E180)();
  }
  v7 = *a5 >> 3;
  if ( (_DWORD)v7 != 4262015 )
  {
    v40 = &v5[2 * v7];
    goto LABEL_5;
  }
  v17 = MEMORY[0x182084840](a1, a2, a3: v5 + 94153030, a4: v5 + 90179098, a5: v5 + 90179098);
  result = MEMORY[0x182084840](a1: v18, a2: v19, a3: v17, a4: &v5[2 * v42[3]], a5: &v5[2 * v42[3]]);
  if ( *(int *)(v6 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
