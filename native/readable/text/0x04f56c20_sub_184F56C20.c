// sub_4F56C20
// rva 0x04f56c20  size 230  section .text  group text
// window base 0x184f56c20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F56C20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // ebx
  __int64 v14; // [rsp+0h] [rbp-8h] BYREF

  v7 = a5;
  if ( (unsigned __int64)&v14 <= *(_QWORD *)(v6 + 8) )
  {
    sub_1EB84E0(a1, a2, a3, a4: a5);
    goto LABEL_14;
  }
  v8 = *(unsigned __int16 *)(v5 + 2LL * ((unsigned __int16)a5 >> 5) + 377198516) | ((unsigned __int16)a5 >> 1) & 0xFu;
  if ( (unsigned int)v8 >= 0x40 )
  {
LABEL_14:
    sub_2771220(a1, a2, a3: (unsigned int)v8, a4: v7, a5: 64);
    goto LABEL_15;
  }
  v9 = *(unsigned __int16 *)(v5 + 2 * v8 + 377202628) | (unsigned int)(v7 & 1);
  if ( (unsigned int)v9 >= 6 )
  {
LABEL_15:
    sub_2771220(a1, a2, a3: v9, a4: v7, a5: 6);
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
    return sub_4F56D20();
  }
  v10 = *(unsigned int *)(v5 + 4 * v9 + 377202772);
  v11 = ((_BYTE)v7 + ((unsigned __int16)(v10 & 0x3E0) >> 5)) & 0x1F;
  v12 = v10 & 0xC00;
  if ( v12 != 1024 )
  {
    if ( v12 == 2048 )
    {
      v11 = 4294967294LL;
    }
    else if ( v12 == 3072 )
    {
      v11 = (unsigned int)(v11 + 10);
    }
    else
    {
      v11 = 0xFFFFFFFFLL;
    }
  }
  if ( *(int *)(v6 + 16) <= 0 )
    sub_277F280(a1, a2, a3: v10, a4: v7, a5: v11);
  return (unsigned int)v11;
}
