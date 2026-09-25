import os

# Try to import the OpenAI client in a few common ways to avoid static import
# errors in editors/linters when packages are named differently.
try:
    from openai import OpenAI
except Exception:
    try:
        import openai
        OpenAI = getattr(openai, "OpenAI", None)
    except Exception:
        OpenAI = None

if OpenAI is None:
    raise ImportError(
        "OpenAI client not found. Install the official 'openai' package or ensure it's on PYTHONPATH."
    )

client = OpenAI(
    base_url=os.environ.get("NARAROUTER_BASE_URL", "https://router.naraya.ai/v1"),
    api_key=os.environ.get("NARAROUTER_API_KEY", "sk-nry-HAJVWJ_qzFkUZFZKtj8T9R60SRWrhQUpQoeuBsCqfsQ")
)

# Now you can call various models through this one client
response = client.chat.completions.create(
    model=os.environ.get("AI_MODEL", "minimax-m3"),
    messages=[{"role": "user", "content": "Explain this code snippet."}]
)

print(response.choices[0].message.content)