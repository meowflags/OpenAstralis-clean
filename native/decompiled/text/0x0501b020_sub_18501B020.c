// sub_18501B020
// rva 0x0501b020  size 827  section .text  group text
// window base 0x18501b020: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18501B020(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v4; // r14
  __int64 v5; // r15
  unsigned int v6; // eax
  __int64 i; // rcx
  __int64 v8; // rbx
  __int64 v9; // rsi
  char *v10; // rdi
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r8
  int v14; // eax
  __int64 v15; // r10
  signed __int64 v16; // rbp
  __int64 v17; // rax
  signed __int64 v18; // rbp
  __int64 result; // rax
  char *v20; // rdi
  __int64 v21; // [rsp+0h] [rbp-38h] BYREF
  __int64 v22; // [rsp+10h] [rbp-28h]
  __int64 v23; // [rsp+18h] [rbp-20h]
  unsigned __int64 v24; // [rsp+20h] [rbp-18h]
  unsigned int v25; // [rsp+28h] [rbp-10h]
  int v26; // [rsp+2Ch] [rbp-Ch]
  int v27; // [rsp+30h] [rbp-8h]
  unsigned int v28; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)&v21 <= *(_QWORD *)(v5 + 8) )
  {
LABEL_53:
    v23 = a3;
    MEMORY[0x181EB84E0]();
    goto LABEL_54;
  }
  if ( a3 != v4 )
  {
    v6 = *(_DWORD *)(a3 + 8);
    if ( v6 != 0 )
    {
      if ( *(_BYTE *)(a3 + 12) < 0x21u )
      {
        for ( i = 1; (int)v6 > (int)i; i = (unsigned int)(i + 1) )
        {
          if ( v6 <= (unsigned int)i )
            goto LABEL_56;
          if ( *(_BYTE *)(a3 + i + 12) >= 0x21u )
            break;
        }
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
    if ( v6 > (unsigned int)i )
    {
      v8 = v6 - 1;
      if ( *(_BYTE *)(a3 + v8 + 12) < 0x21u )
      {
        while ( (int)v8 > (int)i )
        {
          v3 = (unsigned int)(v8 - 1);
          if ( v6 <= (unsigned int)v3 )
            goto LABEL_55;
          if ( *(_BYTE *)(a3 + v3 + 12) >= 0x21u )
            break;
          LODWORD(v8) = v8 - 1;
        }
      }
      else
      {
        LODWORD(v8) = *(_DWORD *)(a3 + 8);
      }
    }
    else
    {
      LODWORD(v8) = *(_DWORD *)(a3 + 8);
    }
    v27 = v8;
    if ( (_DWORD)i == 0 && (int)v6 <= (int)v8 )
    {
      result = v4;
      goto LABEL_32;
    }
    if ( (_DWORD)i == (_DWORD)v8 )
    {
      result = v4 + 373281248;
LABEL_32:
      if ( *(int *)(v5 + 16) <= 0 )
      {
        v25 = i;
        v23 = a3;
        return MEMORY[0x18277F280]();
      }
      return result;
    }
    LODWORD(v3) = v8 - i;
    v26 = v8 - i;
    if ( (int)v8 - (int)i >= 0 && (unsigned int)i <= v6 )
    {
      v9 = *(_QWORD *)(v5 + 40);
      v10 = *(char **)(v5 + 32);
      v11 = (unsigned int)v3;
      v12 = ((unsigned int)v3 + 19LL) & 0x1FFFFFFF8LL;
      if ( v12 >= 0x20000 || (v13 = v9 + v12) > (unsigned __int64)v10 )
      {
        v24 = (unsigned int)v3;
        v25 = i;
        v28 = v6;
        v23 = a3;
        v9 = MEMORY[0x181EAA840](a1: v10, a2: v9, a3: 34082368, a4: i, a5: (unsigned int)v3);
        v11 = v24;
        LODWORD(v3) = v26;
        i = v25;
        v6 = v28;
        a3 = v23;
      }
      else
      {
        *(_QWORD *)(v5 + 40) = v13;
        *(_QWORD *)v9 = 34082368;
        *(_DWORD *)(v9 + 8) = v3;
      }
      v14 = v6 - i;
      if ( (int)v3 < v14 )
        JUMPOUT(0x30A0360DALL);
      if ( v11 < v14 )
        JUMPOUT(0x30A0360E7LL);
      if ( v14 >= 1LL )
      {
        v10 = (char *)(v9 + 12);
        v15 = 0;
        do
        {
          v10[v15] = *(_BYTE *)(a3 + i + 12 + v15);
          ++v15;
        }
        while ( v15 <= v14 - 1LL );
      }
      v16 = v11 - v14;
      if ( v16 >= 2048 )
      {
        v25 = i;
        v23 = a3;
        v20 = (char *)(v9 + v14 + 12);
        memset(v20, 0, v16);
        v10 = &v20[v16];
        LODWORD(i) = v25;
      }
      else if ( (__int64)v11 > v14 )
      {
        v17 = v9 + v14 + 12;
        v18 = v16 - 1;
        v10 = nullptr;
        do
          (v10++)[v17] = 0;
        while ( (__int64)v10 <= v18 );
      }
      result = *(_QWORD *)(v5 + 40);
      if ( (unsigned __int64)(result + 24) > *(_QWORD *)(v5 + 32) )
      {
        v22 = v9;
        v25 = i;
        v23 = a3;
        result = MEMORY[0x181EAA920](a1: v10, a2: v9, a3: 34082680);
        v9 = v22;
        LODWORD(i) = v25;
        a3 = v23;
      }
      else
      {
        *(_QWORD *)(v5 + 40) = result + 24;
        *(_DWORD *)result = 34082680;
        *(_DWORD *)(result + 4) = 0;
        *(_QWORD *)(result + 8) = 0;
        *(_QWORD *)(result + 16) = 0;
      }
      *(_DWORD *)(result + 4) = (unsigned __int64)(v9 - v4) >> 3;
      goto LABEL_32;
    }
    v25 = i;
    v23 = a3;
    MEMORY[0x18579B920](a1, a2, a3, a4: i, a5: (unsigned int)i, a6: (unsigned int)v8);
    goto LABEL_53;
  }
LABEL_54:
  v6 = MEMORY[0x182771080]();
LABEL_55:
  v6 = MEMORY[0x182771220](a1, a2: a3, a3: (unsigned int)v3, a4: i, a5: v6);
LABEL_56:
  v28 = v6;
  v23 = a3;
  MEMORY[0x182771220](a1, a2, a3: (unsigned int)i, a4: i, a5: v6);
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_18501B360();
}
