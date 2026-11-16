// sub_4F33FA0
// rva 0x04f33fa0  size 624  section .text  group text
// window base 0x184f33fa0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F33FA0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 result; // rax
  __int64 v7; // r8
  __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rdx
  unsigned __int64 v25; // rbp
  __int64 v26; // [rsp+0h] [rbp-28h] BYREF
  __int64 v27; // [rsp+8h] [rbp-20h]
  __int64 v28; // [rsp+10h] [rbp-18h]
  __int64 v29; // [rsp+18h] [rbp-10h]
  __int64 v30; // [rsp+20h] [rbp-8h]

  v30 = a3;
  if ( (unsigned __int64)&v26 <= *(_QWORD *)(v5 + 8) )
  {
    sub_1EB84E0();
    goto LABEL_26;
  }
  result = v4 + 8LL * *(unsigned int *)(a3 + 8);
  if ( *(_DWORD *)(a3 + 28) != 0 )
  {
    v7 = *(_QWORD *)(v5 + 40);
    if ( (unsigned __int64)(v7 + 24) > *(_QWORD *)(v5 + 32) )
    {
      v29 = v4 + 8LL * *(unsigned int *)(a3 + 8);
      v7 = sub_1EAA920(a1, a2, a3: 34085680);
      result = v29;
    }
    else
    {
      *(_QWORD *)(v5 + 40) = v7 + 24;
      *(_DWORD *)v7 = 34085680;
      *(_DWORD *)(v7 + 4) = 0;
      *(_QWORD *)(v7 + 8) = 0;
      *(_QWORD *)(v7 + 16) = 0;
    }
    v28 = v7;
    v8 = *(_QWORD *)(v5 + 40);
    if ( (unsigned __int64)(v8 + 32) > *(_QWORD *)(v5 + 32) )
    {
      v29 = result;
      v8 = sub_1EAA840(a1, a2, a3: 34082368, a4: v8, a5: 16);
      v7 = v28;
      result = v29;
    }
    else
    {
      *(_QWORD *)(v5 + 40) = v8 + 32;
      *(_QWORD *)v8 = 34082368;
      *(_DWORD *)(v8 + 8) = 16;
      *(_DWORD *)(v8 + 12) = 0;
      *(_QWORD *)(v8 + 16) = 0;
      *(_QWORD *)(v8 + 24) = 0;
    }
    *(_DWORD *)(v7 + 4) = (unsigned __int64)(v8 - v4) >> 3;
    v9 = *(unsigned int *)v7;
    if ( (v9 & 2) != 0 )
    {
      v25 = (v7 & 0xFFFFFFFFFFF80000LL) + 2112;
      v9 = (v7 - v25) >> 9;
      if ( *(_BYTE *)((v7 & 0xFFFFFFFFFFF80000LL) + v9 + 0x38) != 0 )
        *(_BYTE *)((v7 & 0xFFFFFFFFFFF80000LL) + ((v7 - v25) >> 9) + 0x38) = 0;
    }
    v29 = result;
    sub_4F36F80(a1, a2, a3: v7, a4: v9, a5: result);
    sub_4F36F80(a1: v11, a2: v12, a3: v28, a4: v10, a5: v4 + 372428112);
    v15 = *(unsigned int *)(v30 + 28);
    if ( (_DWORD)v15 != 0 )
    {
      v29 = ((__int64 (__fastcall *)(__int64, __int64, __int64))(v3
                                                               + *(_QWORD *)(v4
                                                                           + 8LL * (*(_DWORD *)(v4 + 8 * v15) >> 3)
                                                                           + 192)))(
              a1: v13,
              a2: v14,
              a3: v4 + 8 * v15);
      v19 = sub_4F36F80(a1: v17, a2: v18, a3: v28, a4: v16, a5: v29);
      v22 = v28;
      if ( *(_DWORD *)(v28 + 8) != 0 )
      {
        v23 = *(_QWORD *)(v5 + 40);
        if ( (unsigned __int64)(v23 + 24) > *(_QWORD *)(v5 + 32) )
        {
          v27 = v19;
          v23 = sub_1EAA920(a1: v20, a2: v21, a3: 34082680);
          v22 = v28;
        }
        else
        {
          *(_QWORD *)(v5 + 40) = v23 + 24;
          *(_DWORD *)v23 = 34082680;
          *(_DWORD *)(v23 + 4) = 0;
          *(_QWORD *)(v23 + 8) = 0;
          *(_QWORD *)(v23 + 16) = 0;
        }
        v27 = v23;
        sub_4FE9280(a1: v20, a2: v21, a3: v23, a4: v22, a5: v22, a6: v4);
        v24 = v27;
      }
      else
      {
        v24 = v4 + 373281248;
      }
      if ( *(int *)(v5 + 16) <= 0 )
        sub_277F280(a1: v20, a2: v21, a3: v24);
      return v24;
    }
LABEL_26:
    sub_2771080();
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
    return sub_4F34220();
  }
  if ( *(int *)(v5 + 16) <= 0 )
  {
    v29 = v4 + 8LL * *(unsigned int *)(a3 + 8);
    sub_277F280();
    return v29;
  }
  return result;
}
