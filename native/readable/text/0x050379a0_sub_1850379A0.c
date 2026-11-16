// sub_50379A0
// rva 0x050379a0  size 344  section .text  group text
// window base 0x1850379a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_50379A0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v4; // r13
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int (__fastcall *v10)(__int64, __int64, __int64, __int64, __int64); // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rbp
  __int64 v14; // r8
  unsigned int (__fastcall *v15)(__int64, __int64, __int64, __int64, __int64); // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // r8
  __int64 v22; // [rsp+0h] [rbp-38h] BYREF
  __int64 v23; // [rsp+10h] [rbp-28h]
  __int64 v24; // [rsp+18h] [rbp-20h]
  __int64 v25; // [rsp+20h] [rbp-18h]
  unsigned int v26; // [rsp+2Ch] [rbp-Ch]
  unsigned int v27; // [rsp+30h] [rbp-8h]
  unsigned int v28; // [rsp+34h] [rbp-4h]

  v25 = a3;
  if ( (unsigned __int64)&v22 <= *(_QWORD *)(v6 + 8) )
  {
    sub_1EB84E0();
LABEL_21:
    sub_2771080();
LABEL_22:
    sub_2771220(a1, a2, a3: (unsigned int)v12, a4: v12, a5: v3);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    sub_5037B00(a1: v19, a2: v20, a3: v17, a4: v18, a5: v21);
    return;
  }
  v7 = *(unsigned int *)(a3 + 4);
  v8 = v5 + 8 * v7;
  v24 = v8;
  if ( (_DWORD)v7 == 0 )
    goto LABEL_21;
  v28 = *(_DWORD *)(v5 + 8 * v7 + 8);
  if ( v28 != 0 )
  {
    v9 = *(unsigned int *)(v5 + 8 * v7 + 12);
    if ( (_DWORD)v9 != 0 )
    {
      v10 = (unsigned int (__fastcall *)(__int64, __int64, __int64, __int64, __int64))(v4
                                                                                     + *(_QWORD *)(v5
                                                                                                 + 8LL
                                                                                                 * (*(_DWORD *)(v5 + 8 * v9) >> 3)
                                                                                                 + 176));
      v23 = v5 + 8 * v9;
      if ( v10(a1, a2, a3: v23, a4: v8, a5: v5) != 0 )
        sub_5037B00(a1, a2, a3: v25, a4: v11, a5: 0);
    }
    v12 = 1;
    v3 = v28;
    v13 = v24;
    while ( (int)v3 > (int)v12 )
    {
      if ( v3 <= (unsigned int)v12 )
        goto LABEL_22;
      v14 = *(unsigned int *)(v13 + 4 * v12 + 12);
      a2 = (unsigned int)(v12 + 1);
      if ( (_DWORD)v14 != 0 )
      {
        v27 = v12 + 1;
        v26 = v12;
        v15 = (unsigned int (__fastcall *)(__int64, __int64, __int64, __int64, __int64))(v4
                                                                                       + *(_QWORD *)(v5 + 8LL * (*(_DWORD *)(v5 + 8 * v14) >> 3) + 176));
        v23 = v5 + 8 * v14;
        if ( v15(a1, a2, a3: v23, a4: v12, a5: v5) != 0 )
          sub_5037B00(a1, a2, a3: v25, a4: v16, a5: v26);
        v12 = v27;
        v3 = v28;
        v13 = v24;
      }
      else
      {
        v12 = (unsigned int)a2;
      }
    }
  }
  else
  {
    v12 = 0;
  }
  if ( *(int *)(v6 + 16) <= 0 )
    sub_277F280(a1, a2, a3, a4: v12);
}
