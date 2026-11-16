// sub_185020540
// rva 0x05020540  size 471  section .text  group text
// window base 0x185020540: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185020540(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdx
  unsigned int v14; // eax
  unsigned int v15; // ebx
  unsigned int v16; // ebp
  __int64 v17; // rdi
  __int64 result; // rax
  __int64 v19; // rcx
  __int64 v20; // [rsp+0h] [rbp-48h] BYREF
  __int64 v21; // [rsp+10h] [rbp-38h]
  __int64 v22; // [rsp+18h] [rbp-30h]
  __int64 v23; // [rsp+20h] [rbp-28h]
  unsigned int v24; // [rsp+28h] [rbp-20h]
  unsigned int v25; // [rsp+2Ch] [rbp-1Ch]
  unsigned int v26; // [rsp+30h] [rbp-18h]
  int v27; // [rsp+34h] [rbp-14h]
  unsigned int v28; // [rsp+38h] [rbp-10h]
  unsigned int v29; // [rsp+3Ch] [rbp-Ch]
  unsigned int v30; // [rsp+40h] [rbp-8h]
  unsigned int v31; // [rsp+44h] [rbp-4h]

  v23 = a3;
  v31 = a5;
  v22 = a6;
  v30 = a1;
  if ( (unsigned __int64)&v20 <= *(_QWORD *)(v7 + 8) )
  {
    v29 = a2;
    MEMORY[0x181EB84E0]();
  }
  else if ( a3 != v6 )
  {
    v28 = *(_DWORD *)(a3 + 8) >> 1;
    v29 = a2;
    v21 = v6 + 376643464;
    MEMORY[0x18632A360](a1: v6 + 376643464, a2, a3: (unsigned int)a2, a4: v6 + 376643464, a5, a6: v28);
    if ( v22 == v6 )
    {
LABEL_22:
      MEMORY[0x182771080](a1: v30, a2: v29, a3: v23, a4: v8, a5: v31);
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      return sub_185020720();
    }
    v28 = *(_DWORD *)(v22 + 8);
    MEMORY[0x18632A360](a1: v21, a2: v9, a3: 0, a4: v21, a5: v30, a6: v28);
    if ( v30 == 1 )
    {
      result = MEMORY[0x1828310E0](a1: v29, a2: *(unsigned __int8 *)(v22 + 12), a3: v23, a4: v10, a5: 12, a6: v31);
    }
    else
    {
      v13 = v31 - v30;
      v14 = v13 + 2;
      if ( (int)v13 + 2 <= (int)v29 )
      {
        result = 0xFFFFFFFFLL;
      }
      else
      {
        v27 = v13 + 2;
        v15 = *(unsigned __int8 *)(v22 + 12);
        v26 = v15;
        v16 = *(unsigned __int8 *)(v22 + 13);
        v25 = v16;
        v17 = v29;
        while ( 1 )
        {
          result = MEMORY[0x182832D20](a1: v17, a2: v15, a3: v23, a4: v16, a5: 12, a6: v14);
          if ( (int)result < 0 )
          {
            result = 0xFFFFFFFFLL;
            goto LABEL_13;
          }
          if ( v30 == 2 )
            goto LABEL_13;
          v24 = result;
          if ( (unsigned int)MEMORY[0x18282FB40](
                               a1: 12,
                               a2: v30,
                               a3: v23,
                               a4: v19,
                               a5: 2LL * (unsigned int)result + 12,
                               a6: v22) != 0 )
          {
            result = v24;
            goto LABEL_13;
          }
          v14 = v27;
          v13 = v24 + 1;
          if ( v27 <= (int)v13 )
            break;
          v17 = (unsigned int)v13;
          v16 = v25;
          v15 = v26;
        }
        result = 0xFFFFFFFFLL;
      }
    }
LABEL_13:
    if ( *(int *)(v7 + 16) <= 0 )
      return MEMORY[0x18277F280](a1: v11, a2: v12, a3: v13, a4: v28);
    return result;
  }
  v29 = a2;
  MEMORY[0x182771080]();
  goto LABEL_22;
}
