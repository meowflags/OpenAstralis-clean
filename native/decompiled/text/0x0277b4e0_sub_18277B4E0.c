// sub_18277B4E0
// rva 0x0277b4e0  size 572  section .text  group text
// window base 0x18277b4e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18277B4E0(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  int v13; // r8d
  unsigned int v14; // edx
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v23; // [rsp+0h] [rbp-28h] BYREF
  __int64 v24; // [rsp+8h] [rbp-20h]
  int v25; // [rsp+10h] [rbp-18h]
  unsigned int v26; // [rsp+14h] [rbp-14h]
  __int64 v27; // [rsp+18h] [rbp-10h]
  int v28; // [rsp+20h] [rbp-8h]
  int v29; // [rsp+24h] [rbp-4h]

  v29 = a3;
  if ( (unsigned __int64)&v23 <= *(_QWORD *)(v5 + 8) )
  {
    MEMORY[0x181EB84E0]();
  }
  else if ( *(int *)(v5 + 336) >= 1 )
  {
    v6 = *(_QWORD *)(v4 + 376178832);
    if ( v6 != 0 )
    {
      if ( v6 == *(_QWORD *)(v4 + 376656976) )
      {
        v13 = 0;
        v14 = 0;
      }
      else if ( a3 != 0 )
      {
        if ( v6 == v5 )
        {
          v13 = 0;
          v14 = 1;
        }
        else
        {
          v27 = *(_QWORD *)(v4 + 376178832);
          v24 = v4 + 376612880;
          MEMORY[0x182084840](a1, a2, a3: v4 + 376612880, a4: v4 + 376612880, a5: v4 + 366767256);
          MEMORY[0x182084500](a1: v8, a2: v9, a3: v24, a4: v7, a5: 1);
          sub_18277BD00(a1: v11, a2: v12, a3: v24, a4: v10, a5: v27);
          v13 = 1;
          v14 = 1;
          v6 = v27;
        }
      }
      else
      {
        v13 = 0;
        v14 = 1;
      }
      v15 = *(_QWORD *)(v6 + 256);
      a4 = v14;
      while ( v15 != 0 )
      {
        if ( v15 != *(_QWORD *)(v4 + 376656976) )
        {
          a4 = (unsigned int)(a4 + 1);
          if ( v29 != 0 && v15 != v5 )
          {
            v26 = a4;
            v16 = v4 + 376612880;
            if ( v13 != 0 )
            {
              v25 = v13;
              v27 = v15;
            }
            else
            {
              v27 = v15;
              v24 = v4 + 376612880;
              MEMORY[0x182084840](a1, a2, a3: v4 + 376612880, a4, a5: v4 + 366767256);
              MEMORY[0x182084500](a1: v18, a2: v19, a3: v24, a4: v17, a5: 1);
              v25 = 1;
              v16 = v24;
            }
            sub_18277BD00(a1, a2, a3: v16, a4, a5: v27);
            v13 = v25;
            a4 = v26;
            v15 = v27;
          }
        }
        if ( *(int *)(v5 + 16) <= 0 )
        {
          sub_18277F280(a1, a2, a3: *(_QWORD *)(v15 + 256));
          v15 = v20;
        }
        else
        {
          v15 = *(_QWORD *)(v15 + 256);
        }
      }
      v28 = a4;
    }
    else
    {
      v13 = 0;
      v28 = 0;
    }
    if ( v13 != 0 )
    {
      v26 = v13;
      MEMORY[0x182084180](a1, a2, a3: v4 + 376612880, a4, a5: 0);
    }
    else
    {
      v26 = 0;
    }
    v21 = *(unsigned int *)(v4 + 376668604);
    if ( *(int *)(v5 + 16) <= 0 )
      sub_18277F280(a1, a2, a3: v21);
    if ( v28 != 1 )
      JUMPOUT(0x304EC46ACLL);
    return (_DWORD)v21 == 0;
  }
  MEMORY[0x1828C1C40](a1, a2, a3: v4 + 368616744);
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_18277B720();
}
