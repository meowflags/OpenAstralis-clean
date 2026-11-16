// sub_18501E860
// rva 0x0501e860  size 653  section .text  group text
// window base 0x18501e860: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18501E860(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rbx
  __int64 v9; // rcx
  unsigned __int64 v10; // rbp
  unsigned __int64 i; // rax
  unsigned int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rsi
  int v20; // eax
  __int64 v21; // [rsp+0h] [rbp-38h] BYREF
  __int64 v22; // [rsp+10h] [rbp-28h]
  __int64 v23; // [rsp+18h] [rbp-20h]
  __int64 v24; // [rsp+20h] [rbp-18h]
  unsigned int v25; // [rsp+2Ch] [rbp-Ch]
  unsigned int v26; // [rsp+30h] [rbp-8h]
  unsigned int v27; // [rsp+34h] [rbp-4h]

  v27 = a6;
  if ( (unsigned __int64)&v21 <= *(_QWORD *)(v7 + 8) )
  {
    v26 = a5;
    v24 = a3;
    MEMORY[0x181EB84E0]();
  }
  else if ( (int)a6 >= 0 )
  {
    v8 = *(_QWORD *)(v7 + 40);
    v9 = 34082368;
    v10 = ((unsigned int)a6 + 19LL) & 0x1FFFFFFF8LL;
    if ( v10 >= 0x20000 || (a2 = v8 + v10, v8 + v10 > *(_QWORD *)(v7 + 32)) )
    {
      v26 = a5;
      v24 = a3;
      v8 = MEMORY[0x181EAA840](a1, a2, a3: 34082368, a4: 34082368, a5: v27);
      a6 = v27;
      a5 = v26;
      a3 = v24;
    }
    else
    {
      *(_QWORD *)(v7 + 40) = a2;
      *(_QWORD *)v8 = 34082368;
      *(_DWORD *)(v8 + 8) = a6;
      *(_DWORD *)(v8 + 12) = 0;
      if ( v10 - 16 >= 0x800 )
      {
        v26 = a5;
        v24 = a3;
        memset((void *)(v8 + 16), 0, v10 - 16);
        a1 = v8 + v10;
        v9 = 0;
      }
      else
      {
        for ( i = 16; v10 > i; i += 8LL )
          *(_QWORD *)(v8 + i) = 0;
      }
    }
    v23 = v8;
    if ( (int)a5 < 0 )
      goto LABEL_33;
    if ( a3 == v6 )
    {
LABEL_34:
      v26 = a5;
      MEMORY[0x182771080](a1, a2, a3, a4: v9, a5, a6);
    }
    else if ( (unsigned int)(a6 + a5) <= *(_DWORD *)(a3 + 8) )
    {
      if ( a3 == v6 )
        JUMPOUT(0x30A039942LL);
      if ( v8 == v6 )
        JUMPOUT(0x30A03994CLL);
      v24 = a3;
      v26 = a5;
      v12 = MEMORY[0x182836340](a1, a2, a3: a3 + 2LL * (unsigned int)a5 + 12, a4: v8, a5: v8 + 12);
      if ( v12 == v27 )
      {
        v25 = v12;
        goto LABEL_21;
      }
      v25 = v12;
      v16 = sub_185023C20(a1: v14, a2: v15, a3: v24, a4: v13, a5: v26, a6: v27);
      if ( *(_WORD *)(v16 + (int)(2 * v25) + 12) >= 0x100u )
      {
        v22 = v16;
LABEL_17:
        if ( *(int *)(v7 + 16) <= 0 )
          MEMORY[0x18277F280]();
        return v22;
      }
      if ( v27 > *(_DWORD *)(v16 + 8) >> 1 )
      {
LABEL_36:
        MEMORY[0x182770B00](a1: v17, a2: v18, a3: v24, a4: v25, a5: v26);
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
        return sub_18501EB00();
      }
      if ( v16 == v6 )
        JUMPOUT(0x30A0399FALL);
      if ( v23 == v6 )
        JUMPOUT(0x30A039A04LL);
      v22 = v16;
      v20 = MEMORY[0x182836340](a1: v17, a2: v18, a3: v16 + 12, a4: v27, a5: v23 + 12);
      if ( v20 != v27 )
        goto LABEL_17;
LABEL_21:
      if ( *(int *)(v7 + 16) <= 0 )
        MEMORY[0x18277F280]();
      return v23;
    }
    v26 = a5;
    v24 = a3;
    MEMORY[0x182770B00](a1, a2, a3, a4: v9);
    goto LABEL_36;
  }
  v26 = a5;
  v24 = a3;
  MEMORY[0x182770E80](a1, a2, a3: v27);
LABEL_33:
  v26 = a5;
  v24 = a3;
  MEMORY[0x182770B00](a1, a2, a3, a4: v9, a5, a6);
  goto LABEL_34;
}
