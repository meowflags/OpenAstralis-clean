// sub_1ED57E0
// rva 0x01ed57e0  size 554  section .text  group text
// window base 0x181ed57e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1ED57E0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9,
        int a10,
        int a11,
        int a12)
{
  __int64 v12; // rbp
  __int64 v13; // r14
  __int64 v14; // r15
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rsi
  __int64 v19; // rbx
  __int64 v20; // rdi
  __int64 v21; // r9
  __int64 v22; // rbx
  __int64 v23; // rsi
  int v24; // eax
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v29; // edx
  int v30; // ecx
  int v31; // edi
  int v32; // esi
  int v33; // r8d
  int v34; // r9d
  char v35; // [rsp+0h] [rbp-38h] BYREF
  __int64 v36; // [rsp+8h] [rbp-30h]
  __int64 v37; // [rsp+10h] [rbp-28h]
  __int64 v38; // [rsp+18h] [rbp-20h]
  __int64 v39; // [rsp+20h] [rbp-18h]
  int v40; // [rsp+28h] [rbp-10h]
  int v41; // [rsp+2Ch] [rbp-Ch]
  unsigned int v42; // [rsp+30h] [rbp-8h]
  unsigned int v43; // [rsp+34h] [rbp-4h]

  v39 = a5;
  if ( (unsigned __int64)&v35 <= *(_QWORD *)(v14 + 8) )
  {
    v38 = a3;
    sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v35);
LABEL_21:
    v43 = v12;
    v38 = a3;
    sub_2771080();
    goto LABEL_22;
  }
  if ( a5 == v13 )
  {
    if ( *(int *)(v14 + 16) <= 0 )
      JUMPOUT(0x181ED59AFLL);
    return v13;
  }
  v15 = *(_DWORD *)(a3 + 8);
  v16 = *(unsigned int *)(a5 + 8);
  v17 = *(unsigned int *)(a3 + 4);
  v12 = (unsigned int)v16 & v15;
  if ( (_DWORD)v17 == 0 )
    goto LABEL_21;
  v18 = *(unsigned int *)(v13 + 8 * v17 + 8);
  v42 = v18;
  if ( (unsigned int)v18 <= (unsigned int)v12 )
  {
LABEL_22:
    v38 = a3;
    sub_2771220(a1, a2: v18, a3: (unsigned int)v12, a4: v16, a5: v42);
LABEL_23:
    sub_2771220(a1: v20, a2: v23, a3: (unsigned int)v12, a4: v38, a5: (unsigned int)v23);
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
    return sub_1ED5A20(a1: v31, a2: v32, a3: v29, a4: v30, a5: v33, a6: v34, a7);
  }
  v19 = v13 + 8 * v17;
  v20 = *(unsigned int *)(v19 + 4 * v12 + 12);
  v21 = v13 + 8 * v20;
  if ( (_DWORD)v20 == 0 )
    return sub_181ED5938(a1: 0, a2: v18, a3, a4: v16, a5, a6: v21, a7, a8, a9);
  if ( v21 != a5 )
  {
    v41 = v15;
    v37 = v19;
    if ( (_DWORD)v16 == *(_DWORD *)(v13 + 8 * v20 + 8) )
      JUMPOUT(0x181ED596ELL);
    v43 = v16 & v15;
    v38 = a3;
    v12 = v41 & (unsigned int)(v12 + 1);
    v22 = v37;
    v23 = v42;
    v24 = v41;
    v25 = v39;
    while ( (unsigned int)v23 > (unsigned int)v12 )
    {
      v26 = *(unsigned int *)(v22 + 4 * v12 + 12);
      v27 = v13 + 8 * v26;
      if ( (_DWORD)v26 == 0 )
        JUMPOUT(0x181ED599ALL);
      if ( v27 == v25 )
        JUMPOUT(0x181ED599FLL);
      v20 = v24 & (unsigned int)(v12 + 1);
      if ( *(_DWORD *)(v13 + 8 * v26 + 8) == *(_DWORD *)(v25 + 8) )
      {
        v43 = v24 & (v12 + 1);
        v40 = v12;
        v36 = v13 + 8 * v26;
        if ( (unsigned int)sub_27C5800(a1: v20, a2: v23, a3: v27, a4: v27, a5: v25, a6: v25) != 0 )
          JUMPOUT(0x181ED59A4LL);
        v12 = v43;
        v22 = v37;
        v23 = v42;
        v24 = v41;
        v25 = v39;
      }
      else if ( *(int *)(v14 + 16) <= 0 )
      {
        v40 = v12;
        v24 = sub_277F280(a1: v20);
        v12 = (unsigned int)v20;
        v22 = v37;
        v25 = v39;
      }
      else
      {
        v12 = (unsigned int)v20;
      }
    }
    goto LABEL_23;
  }
  return sub_181ED5950(a1: v20, a2: v18, a3, a4: v16, a5, a6: v21, a7, a8, a9, a10, a11, a12);
}
