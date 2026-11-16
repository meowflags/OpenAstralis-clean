// sub_184F317A0
// rva 0x04f317a0  size 637  section .text  group text
// window base 0x184f317a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F317A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  int v8; // eax
  unsigned int v9; // eax
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 result; // rax
  unsigned int v15; // eax
  int v16; // eax
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // [rsp+0h] [rbp-38h] BYREF
  __int64 v31; // [rsp+10h] [rbp-28h]
  __int64 v32; // [rsp+18h] [rbp-20h]
  __int64 v33; // [rsp+20h] [rbp-18h]
  unsigned int v34; // [rsp+2Ch] [rbp-Ch]
  unsigned int v35; // [rsp+30h] [rbp-8h]
  int v36; // [rsp+34h] [rbp-4h]

  v33 = a3;
  v32 = a5;
  v36 = a6;
  v31 = a1;
  if ( (unsigned __int64)&v30 <= *(_QWORD *)(v7 + 8) )
  {
    MEMORY[0x181EB84E0]();
    goto LABEL_40;
  }
  if ( a6 < 1 )
  {
    v9 = 0;
    goto LABEL_7;
  }
  if ( a5 == v6 )
  {
LABEL_40:
    MEMORY[0x182771080]();
    goto LABEL_41;
  }
  v8 = MEMORY[0x184FEBC20](a1, a2, a3: a5, a4, a5: 0);
  if ( v8 == 92 || v8 == 47 )
  {
    v9 = 1;
    while ( 1 )
    {
      a6 = v36;
      if ( v36 <= (int)v9 )
        break;
      v35 = v9;
      v16 = MEMORY[0x184FEBC20](a1, a2, a3: v32, a4, a5: v9);
      if ( v16 == 92 )
      {
        v9 = v35 + 1;
      }
      else
      {
        if ( v16 != 47 )
        {
          v9 = v35;
          a6 = v36;
          break;
        }
        v9 = v35 + 1;
      }
    }
  }
  else
  {
    v9 = 0;
    a6 = v36;
  }
LABEL_7:
  if ( (int)(a6 - v9) < 2 )
    goto LABEL_8;
  v35 = v9;
  if ( v32 == v6 )
  {
LABEL_41:
    MEMORY[0x182771080]();
LABEL_42:
    MEMORY[0x182771080]();
LABEL_43:
    MEMORY[0x182771080]();
    goto LABEL_44;
  }
  v15 = MEMORY[0x184FEBC20](a1, a2, a3: v32, a4, a5: v9);
  if ( v15 - 97 < 0x1A || v15 >= 0x41 && v15 < 0x5B )
  {
    v34 = v15;
    if ( (unsigned int)MEMORY[0x184FEBC20](a1, a2, a3: v32, a4, a5: v35 + 1) == 58 )
    {
      v21 = v31;
      if ( v31 != v6 )
      {
        sub_184F35F80(a1: v31, a2, a3: v31, a4, a5: v34);
        sub_184F35F80(a1: v23, a2: v24, a3: v31, a4: v22, a5: 58);
        result = v35 + 2;
        goto LABEL_13;
      }
LABEL_44:
      MEMORY[0x182771080](a1: v21, a2, a3: v20, a4: v34);
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      return sub_184F31A20(a1: v28, a2: v29, a3: v26, a4: v27);
    }
  }
LABEL_8:
  if ( v36 < 2 )
  {
    result = 0;
    goto LABEL_13;
  }
  if ( v32 == v6 )
    goto LABEL_42;
  v10 = MEMORY[0x184FEBC20](a1, a2, a3: v32, a4, a5: 0);
  if ( v10 != 92 && v10 != 47 )
  {
    result = 0;
    goto LABEL_13;
  }
  v17 = MEMORY[0x184FEBC20](a1: v12, a2: v13, a3: v32, a4: v11, a5: 1);
  if ( v17 != 92 && v17 != 47 )
  {
    result = 0;
    goto LABEL_13;
  }
  if ( v31 == v6 )
    goto LABEL_43;
  v25 = *(unsigned __int16 *)(v33 + 4);
  v35 = *(unsigned __int16 *)(v33 + 4);
  sub_184F35F80(a1: v31, a2: v19, a3: v31, a4: v18, a5: v25);
  result = 1;
LABEL_13:
  if ( *(int *)(v7 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
