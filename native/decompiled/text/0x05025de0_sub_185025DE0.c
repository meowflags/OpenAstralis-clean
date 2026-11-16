// sub_185025DE0
// rva 0x05025de0  size 818  section .text  group text
// window base 0x185025de0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185025DE0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  unsigned int v5; // eax
  int v6; // ebx
  __int64 i; // rcx
  __int64 v8; // rdi
  unsigned int v9; // ebp
  __int64 v10; // rsi
  unsigned int v11; // r9d
  __int64 v12; // rbp
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // r11
  unsigned __int64 v15; // r11
  int v16; // eax
  __int64 v17; // rsi
  __int64 v18; // r11
  signed __int64 v19; // rsi
  __int64 result; // rax
  __int64 v21; // rax
  signed __int64 v22; // rsi
  signed __int64 v23; // r8
  __int64 v24; // [rsp+0h] [rbp-48h] BYREF
  __int64 v25; // [rsp+10h] [rbp-38h]
  __int64 v26; // [rsp+18h] [rbp-30h]
  unsigned int v27; // [rsp+24h] [rbp-24h]
  unsigned int v28; // [rsp+28h] [rbp-20h]
  unsigned int v29; // [rsp+2Ch] [rbp-1Ch]
  unsigned __int64 v30; // [rsp+30h] [rbp-18h]
  unsigned int v31; // [rsp+3Ch] [rbp-Ch]
  unsigned int v32; // [rsp+40h] [rbp-8h]
  unsigned int v33; // [rsp+44h] [rbp-4h]

  if ( (unsigned __int64)&v24 <= *(_QWORD *)(v4 + 8) )
  {
LABEL_49:
    MEMORY[0x181EB84E0]();
  }
  else if ( a3 != v3 )
  {
    v5 = *(_DWORD *)(a3 + 8);
    v6 = v5 >> 1;
    v33 = v5 >> 1;
    if ( (v5 & 0xFFFFFFFE) != 0 )
    {
      if ( *(_WORD *)(a3 + 12) < 0x21u )
      {
        for ( i = 1; v6 > (int)i && *(_WORD *)(a3 + 2 * (int)i + 12) < 0x21u; i = (unsigned int)(i + 1) )
          ;
      }
      else
      {
        i = 0;
      }
    }
    else
    {
      i = 0;
    }
    v32 = i;
    if ( v6 > (int)i )
    {
      v8 = (unsigned int)(v6 - 1);
      if ( *(_WORD *)(a3 + 2 * (v6 - 1) + 12) < 0x21u )
      {
        while ( (int)v8 > (int)i )
        {
          a2 = 2 * ((int)v8 - 1);
          if ( *(_WORD *)(a3 + a2 + 12) >= 0x21u )
            break;
          v8 = (unsigned int)(v8 - 1);
        }
      }
      else
      {
        v8 = (unsigned int)v6;
      }
    }
    else
    {
      v8 = (unsigned int)v6;
    }
    v31 = v8;
    if ( (int)i >= 1 || v6 > (int)v8 )
    {
      v9 = 2 * v8;
      v10 = (unsigned int)(2 * i);
      if ( (i & 0x40000000) == 0 )
      {
        v11 = v9 - v10;
        if ( (int)(v9 - v10) >= 0 && (unsigned int)v10 <= v5 )
        {
          v12 = *(_QWORD *)(v4 + 40);
          v13 = v11;
          v14 = (v11 + 19LL) & 0x1FFFFFFF8LL;
          if ( v14 >= 0x20000 || (v15 = v12 + v14) > *(_QWORD *)(v4 + 32) )
          {
            v30 = v11;
            v29 = 2 * i;
            v28 = v5;
            v26 = a3;
            v27 = v11;
            v12 = MEMORY[0x181EAA840](a1: v8, a2: v10, a3: 34082368, a4: i, a5: v11);
            v13 = v30;
            v11 = v27;
            v10 = v29;
            v8 = v31;
            i = v32;
            v5 = v28;
            a3 = v26;
          }
          else
          {
            *(_QWORD *)(v4 + 40) = v15;
            *(_QWORD *)v12 = 34082368;
            *(_DWORD *)(v12 + 8) = v11;
          }
          v16 = v5 - v10;
          if ( (int)v11 < v16 )
            JUMPOUT(0x30A040EAFLL);
          if ( v13 < v16 )
            JUMPOUT(0x30A040EBCLL);
          if ( v16 >= 1LL )
          {
            v17 = a3 + v10 + 12;
            v18 = 0;
            do
            {
              *(_BYTE *)(v12 + 12 + v18) = *(_BYTE *)(v17 + v18);
              ++v18;
            }
            while ( v18 <= v16 - 1LL );
          }
          v19 = v13 - v16;
          if ( v19 >= 2048 )
          {
            memset((void *)(v12 + v16 + 12), 0, v19);
            v8 = v31;
            i = v32;
          }
          else if ( (__int64)v13 > v16 )
          {
            v21 = v12 + v16 + 12;
            v22 = v19 - 1;
            v23 = 0;
            do
              *(_BYTE *)(v21 + v23++) = 0;
            while ( v23 <= v22 );
          }
          result = *(_QWORD *)(v4 + 40);
          a2 = result + 24;
          if ( (unsigned __int64)(result + 24) > *(_QWORD *)(v4 + 32) )
          {
            v25 = v12;
            v26 = a3;
            result = MEMORY[0x181EAA920](a1: v8, a2, a3: 34082680, a4: i);
            v12 = v25;
            v8 = v31;
            i = v32;
            a3 = v26;
          }
          else
          {
            *(_QWORD *)(v4 + 40) = a2;
            *(_DWORD *)result = 34082680;
            *(_DWORD *)(result + 4) = 0;
            *(_QWORD *)(result + 8) = 0;
            *(_QWORD *)(result + 16) = 0;
          }
          *(_BYTE *)(result + 12) = 1;
          *(_DWORD *)(result + 4) = (unsigned __int64)(v12 - v3) >> 3;
          goto LABEL_25;
        }
      }
      v26 = a3;
      MEMORY[0x18579B920](a1: v8, a2: v10, a3, a4: i, a5: (unsigned int)v10, a6: v9);
      goto LABEL_49;
    }
    result = v3;
LABEL_25:
    if ( *(int *)(v4 + 16) <= 0 )
    {
      v26 = a3;
      return MEMORY[0x18277F280](a1: v8, a2, a3, a4: i);
    }
    return result;
  }
  MEMORY[0x182771080]();
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
  return sub_185026120();
}
