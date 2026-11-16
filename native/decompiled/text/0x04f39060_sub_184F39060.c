// sub_184F39060
// rva 0x04f39060  size 442  section .text  group text
// window base 0x184f39060: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F39060(int a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  int v8; // eax
  __int64 v9; // rdi
  __int64 v10; // rsi
  unsigned int v11; // ebx
  __int64 v12; // rcx
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rdx
  __int64 v15; // rdx
  char v17; // [rsp+0h] [rbp-38h] BYREF
  __int64 v18; // [rsp+10h] [rbp-28h]
  int v19; // [rsp+18h] [rbp-20h]
  int v20; // [rsp+1Ch] [rbp-1Ch]
  __int64 v21; // [rsp+20h] [rbp-18h]
  unsigned int v22; // [rsp+28h] [rbp-10h]
  int v23; // [rsp+2Ch] [rbp-Ch]
  unsigned int v24; // [rsp+30h] [rbp-8h]
  unsigned int v25; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)&v17 <= *(_QWORD *)(v7 + 8) )
  {
LABEL_15:
    v23 = a6;
    v22 = a5;
    MEMORY[0x181EB84E0]();
  }
  else if ( a3 != v6 )
  {
    v18 = a3;
    v25 = *(_DWORD *)(a3 + 8);
    v24 = v25 >> a5;
    if ( (int)(a6 - (v25 >> a5)) >= 1 )
    {
      v23 = a6;
      v22 = a5;
      v8 = sub_184F3A7C0(a1, a2: a6, a3, a4: a3, a5, a6, a7: v17);
      v11 = v8 << v22;
      if ( v8 << v22 >= 0 )
      {
        v12 = *(_QWORD *)(v7 + 40);
        v13 = *(_QWORD *)(v7 + 32);
        v14 = (v11 + 19LL) & 0x1FFFFFFF8LL;
        if ( v14 >= 0x20000 || (v15 = v12 + v14) > v13 )
        {
          v21 = v11;
          v20 = v8;
          v19 = v8 << v22;
          MEMORY[0x181EAA840](a1: v13, a2: v10, a3: 34082368, a4: v12, a5: v11);
          v11 = v19;
        }
        else
        {
          *(_QWORD *)(v7 + 40) = v15;
          *(_QWORD *)v12 = 34082368;
          *(_DWORD *)(v12 + 8) = v11;
        }
        if ( v25 >= v11 )
          JUMPOUT(0x309E4F11ALL);
        JUMPOUT(0x309E4F10FLL);
      }
      MEMORY[0x18579A560](a1: v9, a2: v10, a3: v18, a4: v22, a5: v11);
      goto LABEL_15;
    }
    v23 = a6;
    v22 = a5;
    if ( *(int *)(v7 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return a3;
  }
  MEMORY[0x182771080]();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_184F39220();
}
